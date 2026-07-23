#include "stdio.h"

int main()
{
    int ulang = 0, input[10], cari = 0, jumlah, posisi = 0, dapat;

    printf("Masukkan banyak data: ");
    scanf("%d", &ulang);

    for (int i = 0; i < ulang; i++) {
        printf("\tData [%d] : ", i);
        scanf("%d", &input[i]);
    }

    printf("Data yang dimasukkan: ");
    for (int i = 0; i < ulang; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");

    do {
        printf("Masukkan data yang dicari: ");
        if(scanf("%d", &cari) != 1) {
            printf("Input bukan angka!");
            return 1;
        }
        jumlah = 0;
        dapat = 0;

        printf("Data %d ditemukan pada indeks: ", cari);

        for (int i = 0; i < ulang; i++) {
            if (input[i] == cari) {
                jumlah++;
                printf("%d ", i);
                dapat = 1;
            }
        }

        if (dapat) {
            printf("\nBanyak data %d yaitu %d\n", cari, jumlah);
        } else {
            printf("\nData %d tidak ada. Banyak data %d yaitu 0.\n", cari, cari);
        }

    } while (!dapat);
}
