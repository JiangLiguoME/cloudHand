{application, emqx_web_hook, [
	{description, "EMQ X Webhook Plugin"},
	{vsn, "3.0"},
	{id, "v3.0-rc.1-dirty"},
	{modules, ['emqx_web_hook','emqx_web_hook_app','emqx_web_hook_cfg','emqx_web_hook_sup']},
	{registered, [emqx_web_hook_sup]},
	{applications, [kernel,stdlib,jsx,clique]},
	{mod, {emqx_web_hook_app, []}}
]}.