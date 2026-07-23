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

  /* This variable is using the comma operator. It is used for separating the
   * variable names and this will be count as 3 int variables
   */
  int panjang = 8;
  int lebar = 4;
  /* `hasil` is a lvalue (pronounced as el value), and the term for right side
   * is `rvalue` */
  int hasil = panjang * lebar;
  char total[69];

  const char *msg[] = {
    "panjang = 8\n",
    "lebar = 4\n",
    "hasil = panjang * lebar\n"
  };

  const char **p = msg;

  while(*p) {
    print(*p);
    p++;
  }

  print("Luas persegi panjangnya adalah ");

  int len = SPRINTF(total, "%d", hasil);
  if(len < 0)
    print("Something wrong with the sprintf");
  else print(total);

  ExitProcess(0);
}
