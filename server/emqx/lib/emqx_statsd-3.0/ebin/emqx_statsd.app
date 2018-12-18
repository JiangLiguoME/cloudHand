{application, emqx_statsd, [
	{description, "Statsd for EMQ X"},
	{vsn, "3.0"},
	{id, "v3.0-rc.1-dirty"},
	{modules, ['emqx_statsd','emqx_statsd_app','emqx_statsd_sup']},
	{registered, [emqx_statsd_sup]},
	{applications, [kernel,stdlib,prometheus]},
	{mod, {emqx_statsd_app, []}}
]}.