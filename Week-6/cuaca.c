#include <stdio.h>

int main(void) {
  int suhu = 0;

  scanf("%3d", &suhu);

  if (suhu < 0) {
    printf("Beku\n");
  }

  else if(suhu >= 0 && suhu <= 20) {
    printf("Dingin\n");
  }

  else printf("Hangat\n");

  return 0;
}
