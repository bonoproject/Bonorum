
Debian
====================
This directory contains files used to package bonorumcoind/bonorumcoin-qt
for Debian-based Linux systems. If you compile bonorumcoind/bonorumcoin-qt yourself, there are some useful files here.

## bonorumcoin: URI support ##


bonorumcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bonorumcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bonorumcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/bonorumcoin128.png` to `/usr/share/pixmaps`

bonorumcoin-qt.protocol (KDE)

