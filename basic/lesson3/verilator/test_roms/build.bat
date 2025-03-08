setlocal EnableDelayedExpansion
set "FILES="
for /f "delims=" %%A in ('dir /b /s *.s') do set FILES=!FILES! %%~nxA
nmake /A