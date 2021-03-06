%% -*- erlang -*-
%% forked from "https://github.com/tolbrino/hut/tree/v1.2.0"

-ifndef(__HUT_HRL__).
-define(__HUT_HRL__, true).

%% Supported logging levels (taken from lager):
-define(log_levels, [debug, info, notice, warning, error, critical, alert, emergency]).
-define(default_log_level, info).
-define(default_use_log_level_gate, true).

%% Helper macros
-define(__fmt(__Fmt, __Args), lists:flatten(io_lib:format(__Fmt, __Args))).

-define(__maybe_log(__Level, __Fun),
        ((fun() ->
                   __UseGate = application:get_env(hut, use_log_level_gate, ?default_use_log_level_gate),
                  case __UseGate of
                      true ->
                          __CurrentLevel = application:get_env(hut, level, ?default_log_level),
                          __AllowedLevels = lists:dropwhile(fun(__Element) -> __Element =/= __CurrentLevel end, ?log_levels),
                          __IsEnabled = lists:member(__Level, __AllowedLevels),
                          case __IsEnabled of
                              true ->
                                  __Fun();
                              _ ->
                                  ok
                          end;
                      _ ->
                          __Fun()
                  end
          end)())).

%% Lager support

-ifdef(HUT_LAGER).
-define(log_type, "lager").

-ifndef(HUT_LAGER_SINK).
-define(HUT_LAGER_SINK, lager).
-endif.

-define(log(__Level, __Fmt),
        ?HUT_LAGER_SINK:__Level([], __Fmt, [])).
-define(log(__Level, __Fmt, __Args),
        ?HUT_LAGER_SINK:__Level([], __Fmt, __Args)).
-define(log(__Level, __Fmt, __Args, __Opts),
        ?HUT_LAGER_SINK:__Level(__Opts, __Fmt, __Args)).

-else.

% Using plain `io:format/2`.

-ifdef(HUT_IOFORMAT).
-define(log_type, "ioformat").

-define(log(__Level, __Fmt),
        ?__maybe_log(__Level, fun() -> io:format("~p: " ++ __Fmt ++ "~n", [__Level]) end)).
-define(log(__Level, __Fmt, __Args),
        ?__maybe_log(__Level, fun() -> io:format("~p: " ++ __Fmt ++ "~n", [__Level] ++ __Args) end)).
-define(log(__Level, __Fmt, __Args, __Opts),
        ?__maybe_log(__Level, fun() -> io:format("~p: " ++ __Fmt ++ "; Opts: ~p~n", [__Level] ++ __Args ++ [__Opts]) end)).

-else.

% All logging calls are passed into a custom logging callback module given by `HUT_CUSTOM_CB`.

-ifdef(HUT_CUSTOM).
-ifdef(HUT_CUSTOM_CB).
-define(log_type, "custom").

-define(log(__Level, __Fmt),
        ?__maybe_log(__Level, fun() -> ?HUT_CUSTOM_CB:log(__Level, __Fmt, [], []) end)).
-define(log(__Level, __Fmt, __Args),
        ?__maybe_log(__Level, fun() -> ?HUT_CUSTOM_CB:log(__Level, __Fmt, __Args, []) end)).
-define(log(__Level, __Fmt, __Args, __Opts),
        ?__maybe_log(__Level, fun() -> ?HUT_CUSTOM_CB:log(__Level, __Fmt, __Args, __Opts) end)).

-endif.
-else.

% All logging calls are ignored.

-ifdef(HUT_NOOP).
-define(log_type, "noop").

-define(log(__Level, __Fmt), true).
-define(log(__Level, __Fmt, __Args), true).
-define(log(__Level, __Fmt, __Args, __Opts), true).

-else.

% If none of the above options was defined, we default to using OTP sasl's error_logger.
-define(log_type, "default").

-define(__log_error_logger(__Level, __Fmt, __Args, __Opts),
        ((fun() ->
                  case __Level of
                      info ->
                          error_logger:info_report([{msg, ?__fmt(__Fmt, __Args)}, {options, __Opts}]);
                      warning ->
                          error_logger:warning_report([{msg, ?__fmt(__Fmt, __Args)}, {options, __Opts}]);
                      error ->
                          error_logger:error_report([{msg, ?__fmt(__Fmt, __Args)}, {options, __Opts}]);
                      _ when __Level =:= debug; __Level =:= notice ->
                          error_logger:info_report([{sublevel, __Level}, {msg, ?__fmt(__Fmt, __Args)}, {options, __Opts}]);
                      _ when __Level =:= critical; __Level =:= alert; __Level =:= emergency ->
                          error_logger:error_report([{sublevel, __Level}, {msg, ?__fmt(__Fmt, __Args)}, {options, __Opts}]);
                      _ ->
                          ok
                  end
          end)())).

-define(log(__Level, __Fmt),
        ?__maybe_log(__Level, fun() -> ?__log_error_logger(__Level, __Fmt, [], []) end)).
-define(log(__Level, __Fmt, __Args),
        ?__maybe_log(__Level, fun() -> ?__log_error_logger(__Level, __Fmt, __Args, []) end)).
-define(log(__Level, __Fmt, __Args, __Opts),
        ?__maybe_log(__Level, fun() -> ?__log_error_logger(__Level, __Fmt, __Args, __Opts) end)).

% End of all actual log implementation switches.
-endif.
-endif.
-endif.
-endif.

% End of log declarations
-endif.
