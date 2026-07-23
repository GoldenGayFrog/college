#include <stdio.h>

#define OFFSET 0
#define ROWS_LIMIT 2
#define COLUMNS_LIMIT 5

int main(void) {
  int array[2][5];
  for (int i = OFFSET; i < ROWS_LIMIT; i++) {
    for (int j = OFFSET; j < COLUMNS_LIMIT; j++) {
      scanf("%d", &array[i][j]);
      array[i][j] *= array[i][j];
    }
  }
  for (int i = OFFSET; i < ROWS_LIMIT; i++) {
    for (int j = OFFSET; j < COLUMNS_LIMIT; j++)
      printf("%d ", array[i][j]);
    printf("\n");
  }
  return 0;
}
