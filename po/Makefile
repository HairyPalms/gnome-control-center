# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2004-2008 Rodney Dawes <dobey.pwns@gmail.com>
#
# This file may be copied and used freely without restrictions.  It may
# be used in projects which are not available under a GNU Public License,
# but which still want to provide support for the GNU gettext functionality.
#
# - Modified by Owen Taylor <otaylor@redhat.com> to use GETTEXT_PACKAGE
#   instead of PACKAGE and to look for po2tbl in ./ not in intl/
#
# - Modified by jacob berkman <jacob@ximian.com> to install
#   Makefile.in.in and po2tbl.sed.in for use with glib-gettextize
#
# - Modified by Rodney Dawes <dobey.pwns@gmail.com> for use with intltool
#
# We have the following line for use by intltoolize:
# INTLTOOL_MAKEFILE

GETTEXT_PACKAGE = gnome-control-center-2.0
PACKAGE = gnome-control-center
VERSION = 3.6.3

SHELL = /bin/bash

srcdir = .
top_srcdir = ..
top_builddir = ..


prefix = /usr
exec_prefix = ${prefix}
datadir = ${datarootdir}
datarootdir = ${prefix}/share
libdir = ${exec_prefix}/lib
DATADIRNAME = share
itlocaledir = $(prefix)/$(DATADIRNAME)/locale
subdir = po
install_sh = ${SHELL} /home/mike/Desktop/gnome-control-center/install-sh
# Automake >= 1.8 provides /bin/mkdir -p.
# Until it can be supposed, use the safe fallback:
mkdir_p = $(install_sh) -d

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
MSGMERGE = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --dist
GENPOT   = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --pot

ALL_LINGUAS = 

PO_LINGUAS=$(shell if test -r $(srcdir)/LINGUAS; then grep -v "^\#" $(srcdir)/LINGUAS; else echo "$(ALL_LINGUAS)"; fi)

USER_LINGUAS=$(shell if test -n "$(LINGUAS)"; then LLINGUAS="$(LINGUAS)"; ALINGUAS="$(ALL_LINGUAS)"; for lang in $$LLINGUAS; do if test -n "`grep \^$$lang$$ $(srcdir)/LINGUAS 2>/dev/null`" -o -n "`echo $$ALINGUAS|tr ' ' '\n'|grep \^$$lang$$`"; then printf "$$lang "; fi; done; fi)

USE_LINGUAS=$(shell if test -n "$(USER_LINGUAS)" -o -n "$(LINGUAS)"; then LLINGUAS="$(USER_LINGUAS)"; else if test -n "$(PO_LINGUAS)"; then LLINGUAS="$(PO_LINGUAS)"; else LLINGUAS="$(ALL_LINGUAS)"; fi; fi; for lang in $$LLINGUAS; do printf "$$lang "; done)

POFILES=$(shell LINGUAS="$(PO_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.po "; done)

DISTFILES = Makefile.in.in POTFILES.in $(POFILES)
EXTRA_DISTFILES = ChangeLog POTFILES.skip Makevars LINGUAS

POTFILES = \
	../panels/background/background.ui \
	../panels/background/bg-colors-source.c \
	../panels/background/cc-background-chooser-dialog.c \
	../panels/background/cc-background-item.c \
	../panels/background/cc-background-panel.c \
	../panels/background/gnome-background-panel.desktop.in.in \
	../panels/bluetooth/bluetooth-properties.desktop.in.in \
	../panels/bluetooth/bluetooth.ui \
	../panels/bluetooth/cc-bluetooth-panel.c \
	../panels/color/cc-color-panel.c \
	../panels/color/color.ui \
	../panels/color/gnome-color-panel.desktop.in.in \
	../panels/common/cc-common-language.c \
	../panels/common/cc-language-chooser.c \
	../panels/common/gdm-languages.c \
	../panels/common/language-chooser.ui \
	../panels/datetime/datetime.ui \
	../panels/datetime/gnome-datetime-panel.desktop.in.in \
	../panels/display/cc-display-panel.c \
	../panels/display/display-capplet.ui \
	../panels/display/gnome-display-panel.desktop.in.in \
	../panels/info/cc-info-panel.c \
	../panels/info/gnome-info-panel.desktop.in.in \
	../panels/info/info.ui \
	../panels/keyboard/00-multimedia.xml.in \
	../panels/keyboard/01-input-sources.xml.in \
	../panels/keyboard/01-launchers.xml.in \
	../panels/keyboard/01-screenshot.xml.in \
	../panels/keyboard/01-system.xml.in \
	../panels/keyboard/50-accessibility.xml.in \
	../panels/keyboard/cc-keyboard-option.c \
	../panels/keyboard/gnome-keyboard-panel.desktop.in.in \
	../panels/keyboard/gnome-keyboard-panel.ui \
	../panels/keyboard/keyboard-shortcuts.c \
	../panels/mouse/cc-mouse-panel.c \
	../panels/mouse/gnome-mouse-panel.desktop.in.in \
	../panels/mouse/gnome-mouse-properties.c \
	../panels/mouse/gnome-mouse-properties.ui \
	../panels/mouse/gnome-mouse-test.c \
	../panels/mouse/gnome-mouse-test.ui \
	../panels/network/cc-network-panel.c \
	../panels/network/gnome-network-panel.desktop.in.in \
	../panels/network/net-device-mobile.c \
	../panels/network/net-device-wifi.c \
	../panels/network/net-device-wired.c \
	../panels/network/net-proxy.c \
	../panels/network/net-vpn.c \
	../panels/network/network-mobile.ui \
	../panels/network/network-proxy.ui \
	../panels/network/network.ui \
	../panels/network/network-vpn.ui \
	../panels/network/network-wifi.ui \
	../panels/network/network-wired.ui \
	../panels/network/panel-common.c \
	../panels/online-accounts/cc-online-accounts-add-account-dialog.c \
	../panels/online-accounts/cc-online-accounts-panel.c \
	../panels/online-accounts/gnome-online-accounts-panel.desktop.in.in \
	../panels/online-accounts/online-accounts.ui \
	../panels/power/cc-power-panel.c \
	../panels/power/gnome-power-panel.desktop.in.in \
	../panels/power/power.ui \
	../panels/printers/cc-printers-panel.c \
	../panels/printers/gnome-printers-panel.desktop.in.in \
	../panels/printers/jobs-dialog.ui \
	../panels/printers/new-printer-dialog.ui \
	../panels/printers/options-dialog.ui \
	../panels/printers/ppd-selection-dialog.ui \
	../panels/printers/pp-ipp-option-widget.c \
	../panels/printers/pp-jobs-dialog.c \
	../panels/printers/pp-new-printer-dialog.c \
	../panels/printers/pp-options-dialog.c \
	../panels/printers/pp-ppd-option-widget.c \
	../panels/printers/pp-ppd-selection-dialog.c \
	../panels/printers/printers.ui \
	../panels/region/gnome-region-panel.desktop.in.in \
	../panels/region/gnome-region-panel-formats.c \
	../panels/region/gnome-region-panel-input-chooser.ui \
	../panels/region/gnome-region-panel-system.c \
	../panels/region/gnome-region-panel.ui \
	../panels/region/ubuntu-region-panel.desktop.in.in \
	../panels/screen/gnome-screen-panel.desktop.in.in \
	../panels/screen/screen.ui \
	../panels/sound/applet-main.c \
	../panels/sound/cc-sound-panel.c \
	../panels/sound/data/gnome-sound-applet.desktop.in \
	../panels/sound/data/gnome-sound-panel.desktop.in.in \
	../panels/sound/data/sounds/gnome-sounds-default.xml.in.in \
	../panels/sound/gvc-applet.c \
	../panels/sound/gvc-balance-bar.c \
	../panels/sound/gvc-channel-bar.c \
	../panels/sound/gvc-combo-box.c \
	../panels/sound/gvc-mixer-control.c \
	../panels/sound/gvc-mixer-dialog.c \
	../panels/sound/gvc-sound-theme-chooser.c \
	../panels/sound/gvc-speaker-test.c \
	../panels/sound/gvc-stream-status-icon.c \
	../panels/sound/sound-theme-file-utils.c \
	../panels/universal-access/cc-ua-panel.c \
	../panels/universal-access/gnome-universal-access-panel.desktop.in.in \
	../panels/universal-access/uap.ui \
	../panels/universal-access/zoom-options.c \
	../panels/universal-access/zoom-options.ui \
	../panels/user-accounts/data/account-dialog.ui \
	../panels/user-accounts/data/account-fingerprint.ui \
	../panels/user-accounts/data/gnome-user-accounts-panel.desktop.in.in \
	../panels/user-accounts/data/password-dialog.ui \
	../panels/user-accounts/data/photo-dialog.ui \
	../panels/user-accounts/data/user-accounts-dialog.ui \
	../panels/user-accounts/org.gnome.controlcenter.user-accounts.policy.in \
	../panels/user-accounts/pw-utils.c \
	../panels/user-accounts/run-passwd.c \
	../panels/user-accounts/um-account-dialog.c \
	../panels/user-accounts/um-account-type.c \
	../panels/user-accounts/um-fingerprint-dialog.c \
	../panels/user-accounts/um-password-dialog.c \
	../panels/user-accounts/um-photo-dialog.c \
	../panels/user-accounts/um-realm-manager.c \
	../panels/user-accounts/um-user-manager.c \
	../panels/user-accounts/um-user-panel.c \
	../panels/user-accounts/um-utils.c \
	../panels/wacom/button-mapping.ui \
	../panels/wacom/calibrator/gui_gtk.c \
	../panels/wacom/cc-wacom-mapping-panel.c \
	../panels/wacom/cc-wacom-nav-button.c \
	../panels/wacom/cc-wacom-page.c \
	../panels/wacom/cc-wacom-stylus-page.c \
	../panels/wacom/gnome-wacom-panel.desktop.in.in \
	../panels/wacom/gnome-wacom-properties.ui \
	../panels/wacom/gsd-wacom-device.c \
	../panels/wacom/wacom-stylus-page.ui \
	../shell/control-center.c \
	../shell/gnomecc.directory.in \
	../shell/gnome-control-center.desktop.in.in \
	../shell/shell.ui \
	../shell/cc-shell-nav-bar.c

CATALOGS=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.gmo "; done)

.SUFFIXES:
.SUFFIXES: .po .pox .gmo .mo .msg .cat

AM_DEFAULT_VERBOSITY = 1
INTLTOOL_V_MSGFMT = $(INTLTOOL__v_MSGFMT_$(V))
INTLTOOL__v_MSGFMT_= $(INTLTOOL__v_MSGFMT_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MSGFMT_0 = @echo "  MSGFMT" $@;

.po.pox:
	$(MAKE) $(GETTEXT_PACKAGE).pot
	$(MSGMERGE) $< $(GETTEXT_PACKAGE).pot -o $*.pox

.po.mo:
	$(INTLTOOL_V_MSGFMT)$(MSGFMT) -o $@ $<

.po.gmo:
	$(INTLTOOL_V_MSGFMT)file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && gencat $@ $*.msg


all: all-yes

all-yes: $(CATALOGS)
all-no:

$(GETTEXT_PACKAGE).pot: $(POTFILES)
	$(GENPOT)

install: install-data
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  dir=$(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $$dir; \
	  if test -r $$lang.gmo; then \
	    $(INSTALL_DATA) $$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $$lang.gmo as $$dir/$(GETTEXT_PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $(srcdir)/$$lang.gmo as" \
		 "$$dir/$(GETTEXT_PACKAGE).mo"; \
	  fi; \
	  if test -r $$lang.gmo.m; then \
	    $(INSTALL_DATA) $$lang.gmo.m $$dir/$(GETTEXT_PACKAGE).mo.m; \
	    echo "installing $$lang.gmo.m as $$dir/$(GETTEXT_PACKAGE).mo.m"; \
	  else \
	    if test -r $(srcdir)/$$lang.gmo.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$lang.gmo.m \
		$$dir/$(GETTEXT_PACKAGE).mo.m; \
	      echo "installing $(srcdir)/$$lang.gmo.m as" \
		   "$$dir/$(GETTEXT_PACKAGE).mo.m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done

# Empty stubs to satisfy archaic automake needs
dvi info ctags tags CTAGS TAGS ID:

# Define this as empty until I found a useful application.
install-exec installcheck:

uninstall:
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo; \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo.m; \
	done

check: all $(GETTEXT_PACKAGE).pot
	rm -f missing notexist
	srcdir=$(srcdir) $(INTLTOOL_UPDATE) -m
	if [ -r missing -o -r notexist ]; then \
	  exit 1; \
	fi

mostlyclean:
	rm -f *.pox $(GETTEXT_PACKAGE).pot *.old.po cat-id-tbl.tmp
	rm -f .intltool-merge-cache

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES stamp-it
	rm -f *.mo *.msg *.cat *.cat.m *.gmo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f Makefile.in.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: $(DISTFILES)
	dists="$(DISTFILES)"; \
	extra_dists="$(EXTRA_DISTFILES)"; \
	for file in $$extra_dists; do \
	  test -f $(srcdir)/$$file && dists="$$dists $(srcdir)/$$file"; \
	done; \
	for file in $$dists; do \
	  test -f $$file || file="$(srcdir)/$$file"; \
	  ln $$file $(distdir) 2> /dev/null \
	    || cp -p $$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(GETTEXT_PACKAGE).pot
	tmpdir=`pwd`; \
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  echo "$$lang:"; \
	  result="`$(MSGMERGE) -o $$tmpdir/$$lang.new.po $$lang`"; \
	  if $$result; then \
	    if cmp $(srcdir)/$$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	      rm -f $$tmpdir/$$lang.new.po; \
            else \
	      if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	        :; \
	      else \
	        echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	        rm -f $$tmpdir/$$lang.new.po; \
	        exit 1; \
	      fi; \
	    fi; \
	  else \
	    echo "msgmerge for $$lang.gmo failed!"; \
	    rm -f $$tmpdir/$$lang.new.po; \
	  fi; \
	done

Makefile POTFILES: stamp-it
	@if test ! -f $@; then \
	  rm -f stamp-it; \
	  $(MAKE) stamp-it; \
	fi

stamp-it: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/Makefile.in CONFIG_HEADERS= CONFIG_LINKS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
