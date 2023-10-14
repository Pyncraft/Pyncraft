@echo off
call nuitka --follow-imports src/pyncraft.py --standalone
robocopy src/textures pyncraft.dist/ 
xcopy src/conf.ini pyncraft.dist/ 
del pyncraft.build
xcopy assets/* pyncraft.dist 