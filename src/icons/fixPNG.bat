for /f "tokens=*" %%i in ('dir/s/b *.png') do magickconvert.exe "%%i" -strip "%%i"
pause