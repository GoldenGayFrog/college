#include <stdio.h>
#include <stdlib.h>

#define TARIFF1 1000
#define TARIFF2 2000
#define MIN_KWH 100

int main(void)
{
  int menu, input, tagihan, total;
  char ulang;

  do {
    printf("1. Golongan 1\n"
           "2. Golongan 2\n");

    scanf("%d", &menu);

    switch(menu) {
    case 1:
      printf("Berapa Kwh: ");
      scanf(" %d", &input);
      if (input <= MIN_KWH) {
          printf("Tidak mencapai syarat minimum pemakaian\n");
      } else {
          tagihan = input * TARIFF1;
          printf("Tagihan Anda adalah: %d\n", tagihan);
      }

      break;

    case 2:
      printf("Berapa Kwh: ");
      scanf(" %d", &input);
      if (input <= MIN_KWH) {
          printf("Tidak mencapai syarat minimum pemakaian\n");
      } else {
           tagihan = input * TARIFF2;
          printf("Tagihan Anda adalah: %d\n", tagihan);
      }
      break;

    default:
      printf("Pilihan tidak valid");
    }

    total = tagihan * (float)0.1;
    printf("Total pembayaran dengan PPN 10%: %d\n\n"
           "Apakah anda keperluan yang lain?\n", total);

    scanf(" %c", &ulang);

    system("cls");

  } while(ulang == 'y');
}
