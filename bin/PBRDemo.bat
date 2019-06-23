@echo off
setlocal
set "dirname=%~dp0"
if %0 == "%~dpnx0" where /q "%cd%:%~nx0" && set "dirname=%cd%\"
if exist "%dirname%CraftPlayer.exe" (set "DEBUG=") else (set "DEBUG=_d")
"%dirname%CraftPlayer%DEBUG%" Scripts/42_PBRMaterials.as %*
