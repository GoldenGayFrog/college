#include <stdio.h>

#define AND(a, b) (a & b)
#define OR(a, b) (a | b)
#define XOR(a, b) (a ^ b)

int main(void)
{
  int a = 23, b = 14;

  fprintf(stdout, "Manipulasi bit a & b: %d \n" \
                  "Manipulasi bit a | b: %d \n" \
                  "Manipulasi bit a ^ b: %d \n",\
                  AND(a, b), OR(a, b), XOR(a, b));

  return 0;
}
