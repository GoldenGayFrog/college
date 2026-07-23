#include <stdio.h>

int main() // It all started here
{
    int jumlah = 0; // Variable for students total
    char mahasiswa[100][20];  // Array to store names
    int nilai_mahasiswa[100];  // Array to store scores for each student
    int graduate_count = 0, revisi =0;  // Counter for the number of graduates

    // Input jumlah (number of students)
    printf("Masukkan jumlah: ");

    while (scanf("%d", &jumlah) != 1) {
         while (getchar() != '\n');  // Clear invalid input
        printf("Masukkan jumlah: ");
    }

    // Input data for each student
    for (int i = 0; i < jumlah; i++) {
        // Input nama mahasiswa
        printf("Masukkan nama mahasiswa %d: ", i + 1);
        while (scanf("%10s", mahasiswa[i]) != 1) {
            printf("Input nama tidak valid! Coba lagi.\n");
             while (getchar() != '\n');
            printf("Masukkan nama mahasiswa %d: ", i + 1);
        }

        // Input nilai mahasiswa
        printf("Masukkan nilai mahasiswa %d: ", i + 1);
        while (scanf("%d", &nilai_mahasiswa[i]) != 1) {
            printf("\nInput nilai harus angka!\n");
             while (getchar() != '\n');
            printf("Masukkan nilai mahasiswa %d: ", i + 1);
        }
    }

    // Output results
        printf("No\tNama\tNilai\tKeterangan\n");
        for (int i = 0; i < jumlah; i++) {
        // Determine the Keterangan (Lulus or Gagal)
        printf("%d\t%s\t%d\t", i + 1, mahasiswa[i], nilai_mahasiswa[i]);

        if (nilai_mahasiswa[i] >= 60) {
            printf("Lulus\n");
            graduate_count++;
        } else {
            printf("Gagal\n");
            revisi++;
        }
        }

        // Calculating student grades
        int average=0,total=0;
        for (int i = 0; i < jumlah; i++) {
        total += nilai_mahasiswa[i];
        average= total / jumlah;
        }

        printf("Jumlah mahasiswa yang lulus : %d\n", graduate_count);
        printf("Jumlah mahasiswa yang revisi: %d\n", revisi);
        printf("Rata rata nilai kelas: %d", average);

    return 0;
}
