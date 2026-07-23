#include <stdio.h>

int main()
{
  int nilai, jumlah_siswa = 0;
  float total_nilai = 0, rata_rata;
  char nilai_huruf;

  while(1) {
    printf("Masukkan nilai siswa (atau -1 untuk selesai): \n");
    scanf("%d", &nilai);

    if(nilai == -1) {
      break;
    }

    total_nilai += nilai;
    jumlah_siswa++;
  }

  if(jumlah_siswa > 0) {
    rata_rata = total_nilai / jumlah_siswa;

    if(rata_rata >= 81) {
      nilai_huruf = 'A';
    }

    else if (rata_rata >= 71) {
      nilai_huruf = 'B';
    }

    else if (rata_rata >= 61) {
      nilai_huruf = 'C';
    }

    else if (rata_rata >= 50) {
      nilai_huruf = 'D';
    }

    else {
      nilai_huruf = 'F';
    }

    printf("Total nilai %d mahasiswa = %.2f\n", jumlah_siswa, total_nilai);
    printf("Rata-rata (nilai angka) = %.2f\n", rata_rata);
    printf("Rata-rata (nilai huruf) = %c\n", nilai_huruf);
  } else {
    printf("Tidak ada data nilai yang dimasukkan.\n");
  }

  return 0;
}
