@echo off
cl /O2 /GS- exercise1.c strlen64.obj /link kernel32.lib /subsystem:console
cl /O2 /GS- exercise2.c strlen64.obj /link kernel32.lib /subsystem:console
cl /O2 exercise1_old.c
cl /O2 exercise2_old.c
