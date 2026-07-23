#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  int kategori, usia, jumlah_orang;
  float harga_per_orang, total_harga, cashback = 0;
  char merchandise[100];
  char jawab;

  printf("Pilih kategori tiket:\n");
  printf("1. Dengan Wahana\n");
  printf("2. Tanpa Wahana\n");
  printf("Masukkan pilihan kategori tiket (1/2): ");
  scanf("%d", &kategori);

  printf("Masukkan usia: ");
  scanf("%d", &usia);
  printf("Masukkan jumlah orang: ");
  scanf("%d", &jumlah_orang);

  switch (kategori) {
  case 1:
    if (usia >= 0 && usia <= 12) {
        harga_per_orang = 10000;
        strcpy(merchandise, "Souvenir Boneka Panda");
    } else
        if (usia >= 13 && usia <= 25) {
            harga_per_orang = 50000;
            if (jumlah_orang > 5) {
                cashback = 0.10;
            }
            strcpy(merchandise, "Souvenir Boneka Panda");
        } else
            if (usia > 25) {
                harga_per_orang = 70000;
                if (jumlah_orang > 2) {
                    cashback = 0.30;
                }
                strcpy(merchandise, "Souvenir Boneka Panda");
            }
    break;

  case 2:
    if (usia >= 0 && usia <= 12) {
        harga_per_orang = 5000;
    } else
        if (usia >= 13 && usia <= 25) {
            harga_per_orang = 25000;
        } else
            if (usia > 25) {
                harga_per_orang = 50000;
                strcpy(merchandise, "Souvenir Kaos");
            }
    break;

  default:
    printf("\nKategori tiket tidak valid.\n");
    system("cls");
    return main();
  }

  total_harga = harga_per_orang * jumlah_orang;

  if(cashback > 0) {
    total_harga -= total_harga * cashback;
  }

  printf("\nKategori Tiket: %s\n", (kategori == 1) ? "Dengan Wahana" : "Tanpa Wahana");
  printf("Usia: %d tahun\n", usia);
  printf("Jumlah Orang: %d orang\n", jumlah_orang);
  printf("Harga per Orang: Rp %.2f\n", harga_per_orang);
  printf("Merchandise: %s\n", merchandise);
  printf("Total Harga: Rp %.2f\n", total_harga);

  printf("Apakah anda ingin menghitung lagi? (y/t): ");
  scanf(" %c", &jawab);

  system("cls");

  if(jawab == 'y' || jawab == 'Y') {
    system("cls");
    return main();
  }

  printf("Terima kasih sudah menggunakan program ini.\n");

  // Exit successfuly
  return 0;
}
