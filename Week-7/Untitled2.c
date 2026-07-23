#include <stdio.h>

#define MURNI 850000
#define PUTIH 370000
#define PERAK 150000

int main(void)
{
  int emas, gram, total, hargaGram, jumlah;
  float diskon;
  char nama[20];

  printf("Nama: ");
  scanf(" %s", &nama);

  printf("Mau berapa emas?: ");
  scanf("%d", &jumlah); // Use '&' to store the input in the variable

  printf("Kategori emas: \n"
         "1. Emas 99%% \t850000\n"
         "2. Emas 75%% / emas putih \t370000\n"
         "3. Perak \t150000\n");
  scanf("%d", &emas); // Use '&' to store the input in the variable

  // Prompt for gram after category selection
  printf("Jumlah emas (gram): ");
  scanf("%d", &gram); // Use '&' to store the input in the variable

  switch(emas) {
      case 1:
          total = MURNI * gram; // Use gram instead of jumlah
          hargaGram = MURNI;
          break;
      case 2:
          total = PUTIH * gram; // Use gram instead of jumlah
          hargaGram = PUTIH;
          break;
      case 3:
          total = PERAK * gram; // Use gram instead of jumlah
          hargaGram = PERAK;
          break;
      default:
          printf("Kategori tidak valid.\n");
          return 1; // Exit if the category is invalid
  }

  // Calculate discount based on gram
  if(gram < 0) {
      printf("Jumlah gram tidak valid.\n");
      // Exit if the gram is invalid
      return 1;
  }

  else if(gram >= 0 && gram <= 5) {
      // Corrected to 5% instead of 0.5
      diskon = 0.05;
  }

  else if(gram >= 6 && gram <= 10) {
      diskon = 0.10; // 10%
  }

  else {
      diskon = 0.15; // 15%
  }

  // Calculate total after discount
  float totalAfterDiscount = total * (1 - diskon);

  printf("Jumlah emas: %d gram\n"
         "Kategori: %d\n"
         "Harga per gram: %d\n"
         "Total harga: %d\n"
         "Diskon: %.2f\n"
         "Total setelah diskon: %.2f\n",
         gram, emas, hargaGram, total, total * diskon, totalAfterDiscount);

  return 0; // Successful execution
}
