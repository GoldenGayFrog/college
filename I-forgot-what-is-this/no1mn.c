#include <stdio.h>

int main() {
    int n, i;
    int angka, terbesar, terkecil;

    printf("Mau diulang berapa: ");
    scanf("%d", &n);

    printf("Masukkan angka 1: ");
    scanf("%d", &angka);

    terbesar = terkecil = angka;

    for(i = 2; i <= n; i++) {
        printf("Masukkan angka %d: ", i);
        scanf("%d", &angka);

        if(angka > terbesar) {
            terbesar = angka;
        }
        if(angka < terkecil) {
            terkecil = angka;
        }
    }

    printf("Angka terbesar: %d\n", terbesar);
    printf("Angka terkecil: %d\n", terkecil);

    return 0;
}
