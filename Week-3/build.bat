@echo off
cl /O2 /GS- soal3_006.c strlen64.obj /link kernel32.lib /subsystem:console
cl /O2 soal3_006_old.c
