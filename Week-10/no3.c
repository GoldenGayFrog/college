#include "stdio.h"

int main(void) {
  int data, total = 0;

  // Ask for user input
  printf("Masukkan banyak data: ");
  scanf("%d", &data);

  // Looping for addition to var data
  for (int i = 1; i <= data; i++) {
    total += i;
    printf("%d+", i);
  }

  // Show the result in the end
  printf("\b=%d\n", total);

  return 0;
}
