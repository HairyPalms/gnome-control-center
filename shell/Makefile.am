INCLUDES =					\
	-I$(top_srcdir)				\
	$(SHELL_CFLAGS)				\
	$(CHEESE_CFLAGS)

bin_PROGRAMS = gnome-control-center

MARSHAL_FILES = cc-shell-marshal.c cc-shell-marshal.h
BUILT_SOURCES = $(MARSHAL_FILES)

cc-shell-marshal.h: cc-shell-marshal.list
	$(AM_V_GEN) $(GLIB_GENMARSHAL) --prefix=cc_shell_marshal $< --header > $@

cc-shell-marshal.c: cc-shell-marshal.list
	$(AM_V_GEN) $(GLIB_GENMARSHAL) --prefix=cc_shell_marshal $< --body --header > $@

gnome_control_center_SOURCES =			\
	control-center.c			\
	cc-shell-log.c				\
	cc-shell-log.h				\
	gnome-control-center.c			\
	gnome-control-center.h			\
	cc-shell-category-view.c		\
	cc-shell-category-view.h		\
	cc-shell-item-view.c			\
	cc-shell-item-view.h			\
	cc-shell-model.c			\
	cc-shell-model.h			\
	cc-shell-nav-bar.c			\
	cc-shell-nav-bar.h			\
	$(MARSHAL_FILES)

gnome_control_center_LDADD =			\
	libgnome-control-center.la		\
	$(SHELL_LIBS)				\
	$(CHEESE_LIBS)

gnome_control_center_LDFLAGS = -export-dynamic

lib_LTLIBRARIES = libgnome-control-center.la

libgnome_control_center_include_HEADERS =      \
	cc-panel.h                              \
	cc-shell.h                              \
	cc-editable-entry.h			\
	$(NULL)

libgnome_control_center_la_SOURCES =		\
	cc-panel.c				\
	cc-panel.h				\
	cc-shell.c				\
	cc-shell.h				\
	cc-editable-entry.c			\
	cc-editable-entry.h			\
	$(NULL)

libgnome_control_center_la_LDFLAGS =		\
	-no-undefined				\
	-version-info $(LIBGNOMECONTROLCENTER_CURRENT):$(LIBGNOMECONTROLCENTER_REVISION):$(LIBGNOMECONTROLCENTER_AGE) \
	$(NULL)

libgnome_control_center_la_LIBADD = 		\
	$(LIBGNOME_CONTROL_CENTER_LIBS)		\
	$(NULL)

libgnome_control_center_la_LIBTOOLFLAGS = --tag=disable-static

libgnome_control_center_includedir = $(includedir)/gnome-control-center-1/libgnome-control-center

pkgconfigdir=$(libdir)/pkgconfig
pkgconfig_DATA=libgnome-control-center.pc

AM_CPPFLAGS =							\
	-DGNOMELOCALEDIR="\"$(datadir)/locale\""		\
	-DUIDIR="\"$(uidir)\""					\
	-DMENUDIR="\"$(menudir)\""				\
	-DPANELS_DIR="\"$(PANELS_DIR)\""

menudir = $(sysconfdir)/xdg/menus
menu_DATA = gnomecc.menu

gnomecc.menu: gnomecc.menu.in
	$(AM_V_GEN) cat $< | sed 's,@applicationsdir@,$(datadir)/applications/,' > $@

uidir = $(pkgdatadir)/ui
ui_DATA = shell.ui

sysdir = $(datadir)/applications
sys_in_files = gnome-control-center.desktop.in
sys_DATA = $(sys_in_files:.desktop.in=.desktop)
@INTLTOOL_DESKTOP_RULE@

directorydir = $(datadir)/desktop-directories
directory_in_files = gnomecc.directory.in
directory_DATA = $(directory_in_files:.directory.in=.directory)
@INTLTOOL_DIRECTORY_RULE@

EXTRA_DIST =					\
	$(ui_DATA)				\
	gnome-control-center.desktop.in.in	\
	gnomecc.directory.in			\
	gnomecc.menu.in				\
	libgnome-control-center.pc.in  \
	cc-shell-marshal.list

DISTCLEANFILES = gnome-control-center.desktop gnome-control-center.desktop.in gnomecc.directory gnomecc.menu

-include $(top_srcdir)/git.mk
