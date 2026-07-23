#include <stdio.h>

int nilai[6] = {56, 66, 87, 98, 78};

int main() {
  for (int i = 0; i < 5; i++) {
    printf("Nilai Array Index  ke - %d", i);
    printf(" = %d\n", nilai[i]);
  }
  getchar();
  return 0;
}
