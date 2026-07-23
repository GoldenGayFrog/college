#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int tampung, harga, banyak_0, banyak_13, banyak_26, a, kategori, usia;
  float totalharga;
  char ulang, merchandise[30];

  do {
    system("cls");
    printf("========= PILIHAN TIKET =========");
    printf("\n1. Dengan Wahana"
           "\n2. Tanpa Wahana");
    printf("\nMasukkan kategori tiket\t: ");
    scanf("%d", &kategori);

    switch(kategori) {
    case 1:
      printf("Masukkan banyak orang usia 0-12 thn: ");
      scanf("%d", &banyak_0);
      printf("Masukkan banyak orang usia 13-25 thn: ");
      scanf("%d", &banyak_13);
      printf("Masukkan banyak orang usia >25 thn: ");
      scanf("%d", &banyak_26);

      if(usia>=0&&usia<=12) {
        for(a=1;a<=banyak_0;a++) {
          printf("Masukkan usia 0-12 thn orang ke %d : ", a);
          scanf("%d", &usia);
          tampung+=10000;
        }
        strcpy(merchandise, "Souvenir Boneka Panda");
      }

      else if(usia>12&&usia<26) {
        for(a=1;a<=banyak_13;a++) {
           printf("Masukkan usia 13-25 thn orang ke %d : ", a);
           scanf("%d", &usia);
           tampung+=50000;
         }
         if(banyak_13>5)
         {
           strcpy(merchandise, "Cashback 10%%");
         }
      }
      else
      {
        for(a=1;a<=banyak_26;a++)
        {
          printf("Masukkan usia 13-25 thn orang ke %d : ", a);
          scanf("%d", &usia);
          tampung+=70000;
        }
        if(banyak_26>2)
        {
          strcpy(merchandise, "Cashback 30%%");
        }
      }
      break;
      case 2:
        printf("Masukkan banyak orang usia 0-12 thn: ");
        scanf("%d", &banyak_0);
        printf("Masukkan banyak orang usia 13-25 thn: ");
        scanf("%d", &banyak_13);
        printf("Masukkan banyak orang usia >25 thn: ");
        scanf("%d", &banyak_26);

        if(usia>=0&&usia<=12) {
            for(a=1;a<=banyak_0;a++) {
                printf("Masukkan usia 0-12 thn orang ke %d :", a);
                scanf("%d", &usia);
                tampung+=5000;
            }
            strcpy(merchandise, "-");
        }
        else if(usia>12&&usia<26) {
           for(a=1;a<=banyak_13;a++) {
                printf("Masukkan usia 13-25 thn orang ke %d :", a);
                scanf("%d", &usia);
                tampung+=25000;
            }

            if(banyak_13>5) {
                strcpy(merchandise, "-");
            }
        }
        else {
          for(a=1;a<=banyak_26;a++) {
            printf("Masukkan usia 13-25 thn orang ke %d :", a);
            scanf("%d", &usia);
            tampung+=50000;
          }
          strcpy(merchandise, "Souvenir Kaos");
        }
        break;
    }

    printf("=====OUTPUT=======\n");
    printf("Kategori tiket yang anda pilih \t: %d\n", kategori);
    printf("Banyak orang usia 0-12 \t: %d\n", banyak_0);
    printf("Banyak orang usia 13-25 \t: %d\n", banyak_13);
    printf("Banyak orang usia >25 \t: %d\n", banyak_26);

    printf("Apakah ingin lanjut: ");
    scanf(" %c", &ulang);

  } while (ulang == 'y');

  return 0;
}
