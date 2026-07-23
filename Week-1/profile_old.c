#include <stdio.h>

int main(void)
{
  printf("Student Profile\n \
            Name: John Doe\n \
            ID: 2456301001\n \
            Major: Computer Engineering\n \
            Origin: Pekanbaru\n");

  /* Another cool printf function
   * Go check out manpages 3 printf for more info!
  */
  fprintf(stdout, "\nI love C programming!\n");

  /* Return as success */
  return 0;
}
