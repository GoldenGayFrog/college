#include <stdio.h>

#define OFFSET 0
#define INITIAL_LIMIT 7

int main() {
  char initials[INITIAL_LIMIT][27] = {
      "   mmmm      mmmm   \n",          /* first row */
      "  ##\"\"\"#   m##\"\"##m \n",     /* second row */
      " ## mmm    ##    ## \n",          /* third row */
      " ###\"\"##m  \"##mm### \n",       /* forth row */
      " ##    ##    \"\"\" ## \n",       /* fifth row */
      " \"##mm##\"   #mmm##  \n",        /* sixth row */
      "   \"\"\"\"      \"\"\"\" \n"     /* seventh row */
  };

  for (int i = OFFSET; i < INITIAL_LIMIT; i++) {
    printf("%s", initials[i]);
  }
  return 0;
}
