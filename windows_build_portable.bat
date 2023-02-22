@echo off

:: build qwinff
call windows_build.bat

set DEST_DIR=.\windows_release_portable

:: copy files to destination
mkdir %DEST_DIR%
cp -r windows_release/* %DEST_DIR%

windeployqt64releaseonly "%DEST_DIR%\qwinff.exe"
