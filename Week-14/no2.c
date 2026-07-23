#include <stdio.h>

int main() {
  int jumlah = 0;
  printf("Masukkan jumlah siswa = ");
  scanf("%d", &jumlah);
  char nama[16][16];
  printf("\n==========INPUT NAMA==========");
  for (int a = 0; a < jumlah; a++) {
    printf("\n%2d\t\t", a + 1);
    scanf("%s", &nama[a]);
  }
  printf("\n==========  OUTPUT  ==========");
  for (int a = 0; a < jumlah; a++) {
    printf("\n%2d\t\t%s\n", a + 1, nama[a]);
  }
}
