#include <stdio.h>
#include <string.h>

#define DISKON(price, discount) (price * (1 - discount))

// Variables for price with a rides
#define HARGA_ANAK_ANAK 10000
#define HARGA_MID 50000
#define HARGA_DEWASA 70000

// Variables for price without a rides
#define TW_ANAK_ANAK 5000
#define TW_MID 25000
#define TW_DEWASA 50000

int main(void) {
  int age, visitor, price, ticket;
  char gift[20] = "-", loop;
  float discount = 0.0;

  printf("1. Dengan wahana\n"
         "2. Tanpa wahana\n"
         "Pilih tiket: \n");

  scanf("%d", &ticket);

  printf("Berapa orang: \n");
  scanf("%d", &visitor);

  printf("Masukkan umur: \n");
  scanf("%d", &age);

  switch (ticket) {
  case 1:
    if (age <= 12) {
      price = HARGA_ANAK_ANAK;
      strcpy(gift, "Boneka Panda");
    }

    else if(age > 12 && age <= 25) {
      price = HARGA_MID;

      // Gives discount if visitor more than 5
      if(visitor > 5) {
        discount = 0.1;
      }

    }

    else {

      // Gives discount if visitor more than 2
      if(visitor > 2) {
        discount = 0.3;
      }

      price = HARGA_DEWASA;
    }

    break;

  case 2:
    if(age <= 12) {
      price = TW_ANAK_ANAK;
    }

    else if(age > 12 && age <= 25) {
      price = TW_MID;
    }

    else {
      price = TW_DEWASA;
      strcpy(gift, "Souvenir Kaos");
    }
    break;

  default:
    printf("Pilihan tidak valid!");
    printf("\e[1;1H\e[2J");
    return main();
  }

  printf("\n\nKategori Tiket\t: \t%d\n"
         "Usia\t\t: \t%d\n"
         "Jumlah Orang\t: \t%d\n"
         "Harga PerOrang\t: \t%d\n",
         ticket, age, visitor, price);

  if (strcmp(gift, "-")) {
    printf("Merchandise\t: \t%s\n", gift);
  } else {
    printf("Merchandise\t: \t-\n");
  }

  printf("Total Harga\t: \t%-6.2f\n", DISKON(price, discount) * visitor);

  printf("\nApakah ada transaksi yang lain? (y/n) : \n");
  scanf(" %c", &loop);

  if (loop == 'y' || loop == 'Y') {
    printf("\033[2J\033[H");
    return main();
  } else {
    return 0;
  }
}
