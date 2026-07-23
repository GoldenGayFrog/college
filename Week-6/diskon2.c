#include <stdio.h>

int main(void) {
  float diskon, total;

  scanf("%f", &total);

  if (total >= 500) {
    diskon = 0.20;
  } else if (total >= 200 && total <= 499) {
    diskon = 0.10;
  } else if (total < 200) {
    printf("tidak ada diskon\n");
  }

  printf("Total harganya setelah diskon %.3f\n", total * (1 - diskon));

  return 0;
}
