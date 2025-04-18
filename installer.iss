; -- Example1.iss --
; Demonstrates copying 3 files and creating an icon.

; SEE THE DOCUMENTATION FOR DETAILS ON CREATING .ISS SCRIPT FILES!

[Setup]
AppName=compile-r7rs
AppVersion=0.1
WizardStyle=modern
DefaultDirName={autopf}\compile-r7rs
DefaultGroupName=compile-r7rs
UninstallDisplayIcon={app}\compile-r7rs.bat
Compression=lzma2
SolidCompression=yes
OutputBaseFilename=setup-compile-r7rs
OutputDir=dist

[Files]
Source: "compile-r7rs.bat"; DestDir: "{app}"
Source: "compile-r7rs.scm"; DestDir: "{app}"; DestName: "main.scm"
Source: "snow/*"; DestDir: "{app}/snow"; Flags: recursesubdirs
Source: "libs/*"; DestDir: "{app}/libs"; Flags: recursesubdirs
Source: "README.txt"; DestDir: "{app}"; Flags: isreadme

[Icons]
Name: "{group}\compile-r7rs"; Filename: "{app}\compile-r7rs.bat"

[UninstallDelete]
Name: {app}; Type: filesandordirs

[Code]

function NeedsAddPath(Param: string): boolean;
var
OrigPath: string;
begin
if not RegQueryStringValue(HKEY_LOCAL_MACHINE,
        'SYSTEM\CurrentControlSet\Control\Session Manager\Environment',
        'Path', OrigPath)
then begin
Result := True;
exit;
end;
{ look for the path with leading and trailing semicolon }
{ Pos() returns 0 if not found }
Result := Pos(';' + Param + ';', ';' + OrigPath + ';') = 0;
end;

[Registry]
Root: HKLM; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; \
    ValueType: expandsz; ValueName: "Path"; ValueData: "{olddata};{app}"; \
    Check: NeedsAddPath('{app}')
Root: HKLM; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; \
    ValueType: expandsz; ValueName: "Path"; ValueData: "{olddata};C:\Program Files\Sagittarius"; \
    Check: NeedsAddPath('C:\Program Files\Sagittarius')

