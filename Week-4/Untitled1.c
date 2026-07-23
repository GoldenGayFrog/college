#include <stdio.h>

int main(void)
{
  int andi = 3;
  /*
   * pre-increment operator 
   *  Also known as prefix increment, the value is incremented first according
   *  to the precedence and then the less priority operations are done.
   */
  ++andi;       // Andi naik 1 tangga - 4
  ++andi;       // Andi naik 1 tangga - 5
  ++andi;       // Andi naik 1 tangga - 6
  ++andi;       // Andi naik 1 tangga - 7
  ++andi;       // Andi naik 1 tangga - 8

  /*
   * pre-decrement operator 
   *  The decrement in value happens as soon as the decrement operator is
   *  encountered.
   */
  --andi;       // Andi turun 1 tangga - 7
  --andi;       // Andi turun 1 tangga - 6
  --andi;       // Andi turun 1 tangga - 5

  printf("%d", andi);
}
