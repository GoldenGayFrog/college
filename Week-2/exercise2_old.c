#include <stdio.h>

int main(void)
{
  /* This variable is using the comma operator. It is used for separating the variable names
   * and this will be count as 3 int variables
   */
  int p,l,hasil;
  p=8;
  l=4;
  /* `hasil` is a lvalue (pronounced as el value), and the right side of it is called rvalue */
  hasil=p*l;

  printf("Panjang perseginya %d dan lebarnya %d\n \
         Luas persegi panjangnya adalah %d",p , l, hasil);
}
