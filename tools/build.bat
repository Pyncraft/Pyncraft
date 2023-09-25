@echo off
call nuitka --follow-imports src/pyncraft.py
mkdir dist
move pyncraft.exe dist/
move pyncraft.cmd dist/
copy src/textures dist/
copy src/conf.ini dist/
mkdir dist/mods
