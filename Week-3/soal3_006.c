#include <windows.h>

static void print(const char *msg)
{
    HANDLE stdout = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteFile(stdout, msg, strlen(msg), (DWORD[]){0}, NULL);
}

int mainCRTStartup(void) {
  char *initials[] = {
      "   mmmm      mmmm   \n",          /* first row */
      "  ##\"\"\"#   m##\"\"##m \n",     /* second row */
      " ## mmm    ##    ## \n",          /* third row */
      " ###\"\"##m  \"##mm### \n",       /* forth row */
      " ##    ##    \"\"\" ## \n",       /* fifth row */
      " \"##mm##\"   #mmm##  \n",        /* sixth row */
      "   \"\"\"\"      \"\"\"\" \n"     /* seventh row */
  };

  const char **p = initials;

  while(*p) {
    print(*p);
    p++;
  }

  ExitProcess(0);
}
