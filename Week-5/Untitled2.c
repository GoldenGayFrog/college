#include <stdio.h>

#define GOOD_BUY_STOCK(penjualan) (penjualan >= 100 && penjualan <= 200)
#define GOOD_EVALUATION(evaluasi) (evaluasi >= 85 && evaluasi <= 90)
#define GOOD_PRESENCE(presensi) (presensi <= 60)
#define BAD_PRESENCE(presensi) (presensi >= 60)

int main(void)
{
  int penjualan, evaluasi, presensi;

  printf("Jumlah penjualan: \n");
  scanf("%10d", &penjualan);

  printf("Nilai evaluasi: \n");
  scanf("%10d", &evaluasi);

  printf("Presensi: \n");
  scanf("%10d", &presensi);

  if(GOOD_BUY_STOCK(penjualan) && GOOD_EVALUATION(evaluasi)
    && GOOD_PRESENCE(presensi)) {

     printf("Karyawan berkinerja baik\n");
  }

  else if (GOOD_BUY_STOCK(penjualan) &&
    GOOD_EVALUATION(evaluasi) && BAD_PRESENCE(presensi)) {

    printf("Presensinya tidak bagus\n");
  }

  else if (GOOD_BUY_STOCK(penjualan) && GOOD_EVALUATION(evaluasi) &&
    GOOD_PRESENCE(presensi)) {

    printf("Sangat baik, Naik gaji\n");
  };

  /* Program exited correctly */
  return 0;
}
