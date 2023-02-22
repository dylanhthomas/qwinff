** This branch is an attempt to revive QWinFF for my own and others' use. For the forseeable future, this will be a WINDOWS-ONLY project. There are many other great Linux and Mac media converters. If someone wants to support other platform development, please let me know.***


## Current Status

- Builds on windows command-line using Qt5
- Focus is on Windows portable builds

## Changes

- Updated to build in Qt 5.15.2 (LTS)
- Removed power management-related. It appears that this never really worked.
- Removed installer-related items. Will be focusing on portable use case.


## Plans
- Add in updates from pull requests on main (abandoned) repository
- Add features that I need so I can stop using multiple tools and streamline workflows for my team
  - output filename patterns, to allow filesplitting

## How to Build

Prerequisites:
- Install Qt build tools in your path
- To make portable, install patched version of `windeployqt` (See this discussion and download the binary from here:
https://forum.qt.io/topic/112861/how-to-deploy-when-using-resource-system-windows-10)


Build referencing system libraries:
- run `windows_build.bat`

Build to run portabl:
- run `windows_build_portable.bat`




## Previous README below

=========================================


QWinFF, FFmpeg GUI front-end based on Qt4
=========================================

Introduction
------------

QWinFF is a GUI for [FFmpeg](http://ffmpeg.org), a powerful media converter.
FFmpeg can read audio and video files in various formats and convert them into
other formats. QWinFF features an intuitive graphical interface and a rich set
of presets to help you convert media files within a few clicks. Advanced users
can also adjust conversion parameters in detail.

For compiling and installing QWinFF, please refer to INSTALL.txt.

License
-------

Copyright (C) 2011 Timothy Lin <lzh9102@gmail.com>

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

Acknowledgements
----------------

Icons located in src/icons are taken from
[GNOME Project](http://www.gnome.org/)(GPL/LGPL),
[Tango Project](http://tango.freedesktop.org/)(Public Domain), and
[GNOME Colors](http://code.google.com/p/gnome-colors/)(GPL).

This program uses Qt, you can find more information about Qt on
[its website](http://qt-project.org/).

This program relies on [FFmpeg](ffmpeg.org) to do conversion.
License: LGPL/GPL

Some audio-processing functionalities depends on
[SoX](http://sox.sourceforge.net),
the Swiss Army knife of sound processing programs.
License: LGPL/GPL

Other free software projects that influenced the development of QWinFF:

  - [WinFF](http://winff.org) - Presets, Ideas
  - [Sinthgunt](http://code.google.com/p/sinthgunt) - Presets, Parsing FFmpeg
    Output
  - [SMPlayer](http://smplayer.sourceforge.net) - Qt Skills, Project Structure
  - [Clementine](http://www.clementine-player.org) - Qt Skills

Proprietary software that influenced the development of QWinFF

  - [FormatFactory](http://www.formatoz.com) - Ideas, Appearance
