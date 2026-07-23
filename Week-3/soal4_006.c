#include <stdio.h>

int main(void) {
  int matrix1[2][5], matrix2[2][5], result[2][5];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("Masukkan angka untuk matrix1[%d][%d] dan matrix2[%d][%d]: \n", i,
             j, i, j);
      scanf("%d %d", &matrix1[i][j], &matrix2[i][j]);
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("\nHasil penjumlahan matriks:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
