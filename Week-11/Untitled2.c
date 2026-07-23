#include <stdio.h>

int main() {
  char data_huruf[] = {'N', 'I', 'G', 'G', 'E', 'R'};

  char *ptr = data_huruf;

  while (*ptr != 0) {
      printf("%c", *ptr);
      ptr++;
  }

  return 0;
}
