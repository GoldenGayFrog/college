#include <stdio.h>

int main(void)
{
  int array[2][5];

  for(int i = 0; i < 2; i++) {
    printf("Masukkan angka untuk array[%d]\n", i);
    for(int j = 0; j < 5; j++) {
      fscanf(stdin, "%5d", &array[i][j]);
    }
  }

  fprintf(stdout, "Here's all values that stored in array\n" \
                  "----------------------------------------\n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 5; j++) {
      /* Here I'm using pointer notation for accessing the array */
      printf("%d ", *(*(array + i) + j));
    }
    printf("\n");
  }

  /* Programs exited successfully */
  return 0;
}
