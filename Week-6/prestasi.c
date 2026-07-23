#include <stdio.h>

int main(void) {
    int nilai;

    printf("Nilai mahasiswa: ");
    scanf("%d", &nilai);

    if (nilai >= 85) {
        printf("Siswa Berprestasi");
    } else if (nilai >=70 && nilai <= 84) {
        printf("Siswa baik");
    } else if (nilai < 70) {
        printf("Perlu peningkatan");
    }
}
