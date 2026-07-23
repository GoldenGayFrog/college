#include <stdio.h>

int main(void)
{
  int tahun, umur, hasil;

  /* `\n` is a format control for Newline
   * Go checkout manpages for cool FORMAT Controls, man 1 printf */
  printf("Masukkan tahun sekarang: \n");
  scanf("%d", &tahun);

  printf("Masukkan umur anda: \n");
  scanf("%d", &umur);

  hasil = tahun - umur;
  printf("Anda lahir di tahun %d\n", hasil);
}
