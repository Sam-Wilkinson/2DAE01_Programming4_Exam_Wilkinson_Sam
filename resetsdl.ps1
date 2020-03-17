Remove-Item %USERPROFILE%\AppData\Local\Microsoft\MSBuild\v4.0\Microsoft.Cpp.Win32.user.props
Remove-Item %USERPROFILE%\AppData\Local\Microsoft\MSBuild\v4.0\Microsoft.Cpp.x64.user.props

Remove-Item %WINDIR%\System32\libjpeg-9.dll
Remove-Item %WINDIR%\System32\libpng16-16.dll
Remove-Item %WINDIR%\System32\libtiff-5.dll
Remove-Item %WINDIR%\System32\libwebp-7.dll
Remove-Item %WINDIR%\System32\SDL2_image.dll
Remove-Item %WINDIR%\System32\zlib1.dll

Remove-Item %WINDIR%\SysWow64\libjpeg-9.dll
Remove-Item %WINDIR%\SysWow64\libpng16-16.dll
Remove-Item %WINDIR%\SysWow64\libtiff-5.dll
Remove-Item %WINDIR%\SysWow64\libwebp-7.dll
Remove-Item %WINDIR%\SysWow64\SDL2_image.dll
Remove-Item %WINDIR%\SysWow64\zlib1.dll

Remove-Item %WINDIR%\System32\libfreetype-6.dll
Remove-Item %WINDIR%\System32\SDL2_ttf.dll
Remove-Item %WINDIR%\System32\SDL2.dll

Remove-Item %WINDIR%\SysWow64\libfreetype-6.dll
Remove-Item %WINDIR%\SysWow64\SDL2_ttf.dll
Remove-Item %WINDIR%\SysWow64\SDL2.dll