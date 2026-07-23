#include <stdio.h>

#define PAKET_AWAL_BULAN 30000
#define PAKET_TENGAH_BULAN 15000
#define PAKET_AKHIR_BULAN 10000
#define PAKET_BULAN 8000

int main(void) {
  int pesan, harga, jumlah;
  char nama;
  float discount = 0.0;

  printf("Menu Paket\n"
         "1. Paket Awal Bulan\n"
         "2. Paket Tengah Bulan\n"
         "3. Paket Akhir Bulan\n"
         "4. Paket Bulan bulanan\n");
  scanf("%d", &pesan);

  printf("Berapa paket: \n");
  scanf("%d", &jumlah);

  switch (pesan) {
  case 1:
    printf("nasi putih + dendeng lambok/rendang daging + teh es + kerupuk\n");
    harga = PAKET_AWAL_BULAN;
    discount = 0.1;
    break;
  case 2:
    printf("nasi putih + ayam bakar/ayam goreng + teh goyang\n");
    harga = PAKET_TENGAH_BULAN;
    discount = 0.1;
    break;

  case 3:
    printf(
        "nasi putih + telor dadar/ telor mata sapi + air putih + cabe dikit\n");
    harga = PAKET_AKHIR_BULAN;
    discount = 0.05;
    break;

  case 4:
    printf("nasi putih + kerupuk + tahu tempe + air putih + cabe dikit\n");
    harga = PAKET_BULAN;
    break;
  }

  printf("Jumlah pesanan: %d\n"
         "Harga pesanan: %d\n"
         "Harga setelah diskon: %-6.2f\n",
         jumlah, harga * jumlah,
         (harga * jumlah) * ((harga * jumlah) * ((float)1 - discount)));

  // Exited correctly
  return 0;
}
