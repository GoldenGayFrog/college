#include <stdio.h>

int main() {
    int n, i;
    int jamKerja;
    int gajiPerJam = 10000;
    int totalGajiKaryawan;
    float totalGaji, totalGajiPerusahaan = 0;

    printf("Jumlah karyawan: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Jam kerja karyawan %d: ", i);
        scanf("%d", &jamKerja);

        if(jamKerja > 7) {
            totalGaji = (7 * gajiPerJam) + ((jamKerja - 7) * 1.5 * gajiPerJam);
        } else {
            totalGaji = jamKerja * gajiPerJam;
        }

        printf("Total Gaji karyawan %d: Rp.%0.0f\n", i, totalGaji);

        totalGajiPerusahaan += totalGaji;
    }


    printf("\nTotal Gaji yang dibayarkan perusahaan: Rp.%0.0f\n", totalGajiPerusahaan);

    return 0;
}
