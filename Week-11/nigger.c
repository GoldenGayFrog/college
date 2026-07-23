#include <stdio.h>

int main(void) {
  float ipk[10];

  for (int i = 0; i < 10; i++) {
    ipk[i] = (i + 1) * 0.4;
    printf("%.2f\n", ipk[i]);
  }

  return 0;
}
