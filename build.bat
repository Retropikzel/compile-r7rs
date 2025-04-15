echo @echo off > compile-r7rs.bat
echo sash.exe -r7 -L %PROGRAMFILES%/compile-r7rs/snow %PROGRAMFILES%compile-r7rs/main.scm %%^* >> compile-r7rs.bat
