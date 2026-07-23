/* This is called header files
 * Its where all the function that libc or your Operating system provided
 * You can make your own header file for MACRO or predefine your function 
 * (Its called as Function Prototype)
 */
#include <windows.h>

#define STB_SPRINTF_IMPLEMENTATION
#include "stb_sprintf.h"

static void print(const char *msg)
{
    HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteFile(stdout, msg, strlen(msg), (DWORD[]){0}, NULL);
}

#define SPRINTF(buf, fmt, ...) stbsp_sprintf(buf, fmt, __VA_ARGS__)

int mainCRTStartup(void)
{
  char total[120];
  float a = 3.14;
  float jari = 8;
  float hasil = a * jari * jari;

  const char *msg[] = {
    "a = 3.14\n",
    "jari = 8\n",
    "hasil = a * jari * jari\n"
  };

  const char **p = msg;

  while(*p) {
    print(*p);
    p++;
  }

  print("Luas lingkarannya adalah ");

  int len = SPRINTF(total, "%f", hasil);
  if(len < 0)
    print("Something wrong with the sprintf");
  else print(total);

  ExitProcess(0);
}
