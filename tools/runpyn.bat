@echo off
cd %~dp0/../
pip install -r requirements.txt
cd src
python pyncraft.py
pause