{application, emqx_auth_jwt, [
	{description, "EMQ X Authentication with JWT"},
	{vsn, "3.0"},
	{id, "v3.0-rc.1-dirty"},
	{modules, ['emqx_auth_jwt','emqx_auth_jwt_app','emqx_auth_jwt_cfg']},
	{registered, [emqx_auth_jwt_sup]},
	{applications, [kernel,stdlib,jwerl,clique]},
	{mod, {emqx_auth_jwt_app, []}}
]}.