install_data(['91-fwupdtool.rules'],
  install_dir : join_paths(udevdir, 'rules.d')
)

con2 = configuration_data()
con2.set('libexecdir', libexecdir)

# replace @libexecdir@
configure_file(
  input : 'fwupdtool.service.in',
  output : 'fwupdtool.service',
  configuration : con2,
  install: true,
  install_dir: systemdunitdir,
)
