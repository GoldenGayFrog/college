@echo off
cl /O2 /GS- profile.c strlen64.obj /link kernel32.lib /subsystem:console
