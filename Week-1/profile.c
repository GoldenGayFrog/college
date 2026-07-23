#include <windows.h>

/* Compare it to profile_old.c
 * It will show how it sucks and how much I am improved as a programmer */
static void print(const char *msg)
{
    HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteFile(stdout, msg, strlen(msg), (DWORD[]){0}, NULL);
}

int mainCRTStartup(void)
{
  const char *msg[] = {
    "Student Profile\n",
    "Name: John Doe\n",
    "ID: 2456301001\n",
    "Major: Computer Engineering\n",
    "Origin: Somewhere On the universe\n"
  };

  const char **p = msg;

  while(*p) {
    print(*p);
    p++;
  }

  /* Return as success */
  return 0;
}
