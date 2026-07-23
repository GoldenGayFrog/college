#include <stdio.h>

int main(void)
{
  double harga_sabun=10.500, harga_shampoo=15.500;
  int jumlah_sabun=5, jumlah_shampoo=10;

  double total = (harga_sabun * jumlah_sabun) + \
                 (harga_shampoo * jumlah_shampoo);

  printf("Harga total nya: %.1f\n", total);

  /* Program exited successfuly */
  return 0;
}
