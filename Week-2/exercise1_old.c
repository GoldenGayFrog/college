/* This is called header files
 * Its where all the function that libc or your Operating system provided
 * You can make your own header file for MACRO or predefine your function (Its called as Function Prototype)
 */
#include <stdio.h>

int main(void)
{
  float a, jari, hasil;
  a=3.14;
  jari=8;
  hasil=a * jari * jari;
  printf("Luas lingkarannya adalah %.3f", hasil);
}
