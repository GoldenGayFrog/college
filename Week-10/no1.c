#include <stdio.h>

#define MINIMUM 100
#define BATAS_WAJAR 1000
#define TARIFF1 1000
#define TARIFF2 2000

int main(void) {
  int menu, kwh, tariff;
  char ulang;

  printf("1. Golongan Rp1000"
         "\n2. Golongan Rp2000\n"
         "Pilih golongan: \n");
  scanf("%d", &menu);
  switch (menu) {
  case 1:
    printf("Golongan 1\n"
           "Berapa pemakaian listrik anda (kWh): \n");
    scanf("%d", &kwh);
    tariff = TARIFF1;
    break;

  case 2:
    printf("Golongan 2\n"
           "Berapa pemakaian listrik anda (kWh): \n");
    scanf("%d", &kwh);
    tariff = TARIFF2;
    break;
  }

  if(kwh >= MINIMUM && kwh <= BATAS_WAJAR) {
    printf("\nAnda bayar: %d\n"
           "Apakah anda ingin melakukan transaksi lain?(y/n): \n",
           kwh * tariff);
    scanf(" %c", &ulang);
  }

  else if(kwh < MINIMUM) {
    printf("\nBelum bisa bayar sebelum pemakaian mencapai 100kWh!\n"
           "Apakah anda ingin melakukan transaksi lain?(y/n): \n");
    scanf(" %c", &ulang);

  }

  else {
    printf("\nAnda bayar %d + 10 persen pajak\n"
           "Total: %-6.2f\n\n"
           "Apakah anda ingin melakukan transaksi lain?(y/n): \n",
           tariff * kwh, (tariff * kwh) * (float)0.1);

    scanf(" %c", &ulang);
  }

  if(ulang == 'y' || ulang == 'y') {
    printf("\e[1;1H\e[2J");
    return main();
  } else {
    return 0;
  }
}
