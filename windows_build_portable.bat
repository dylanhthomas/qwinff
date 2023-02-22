@echo off
set DEST_DIR=.\windows_release

pushd src
lrelease qwinff.pro
qmake
mingw32-make release
popd

:: Create output directory if it does not exist.
if not exist "%DEST_DIR%" mkdir "%DEST_DIR%"
if not exist "%DEST_DIR%\tools" mkdir "%DEST_DIR%\tools"
if not exist "%DEST_DIR%\translations" mkdir "%DEST_DIR%\translations"

:: Copy the final executable to the output directory.
copy ".\src\release\qwinff.exe" "%DEST_DIR%"

:: Copy data files to the output directory.
copy ".\src\config\presets.xml" "%DEST_DIR%"
copy ".\src\config\constants.xml" "%DEST_DIR%"
copy ".\src\tools\*" "%DEST_DIR%\tools"
copy ".\src\translations\*.qm" "%DEST_DIR%\translations"
copy "COPYING.txt" "%DEST_DIR%\license.txt"
copy "CHANGELOG.txt" "%DEST_DIR%\changelog.txt"

@echo Files have been copied to %DEST_DIR%

windeployqt64releaseonly "%DEST_DIR%\qwinff.exe"
