#include <stdio.h>

int main(void)
{
  unsigned x = 6;

  printf("Nilai x semula = %d \n", x);
  x=x<<2;
  printf("Nilai x kini = %d \n", x);
  x=x>>2;
  printf("Nilai x kini = %d \n", x);
  /* getch() is deprecated */
  getc(stdin);

  /* Program exited successfuly */
  return 0;
}
