#include <stdio.h>

int nilai[2][5] = {{2, 3, 4, 5, 2}, {4, 2, 6, 2, 7}};
int main() {
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d", nilai[i][j]);
      printf(" ");
    }
    printf("\n");
  }
  getchar();
  return 0;
}
