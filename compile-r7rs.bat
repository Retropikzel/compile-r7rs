@echo off
set "PFFI_LOAD_PATH=%PROGRAMFILES%/compile-r7rs/snow/srfi"
sash.exe -r7 -L "%PROGRAMFILES%/compile-r7rs/snow" -L "%PROGRAMFILES%/compile-r7rs" "%PROGRAMFILES%/compile-r7rs/main.scm" %*
