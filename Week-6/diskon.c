#include <stdio.h>

#define BIG_DISCOUNT(total) (total >= 500)
#define MODERATE_DISCOUNT(total) (total >= 200 && total <= 499)
#define NO_DISCOUNT(total) (total < 200)
#define TOTAL_PRICE(total, diskon) (total * (1 - diskon))

int main(void)
{
  float diskon, total;

  scanf("%3f", &total);

  if(BIG_DISCOUNT(total)) {
      diskon = 0.20;
  }

  else if(MODERATE_DISCOUNT(total)) {
      diskon = 0.10;
  }

  else if(NO_DISCOUNT(total)) {
      printf("tidak ada diskon\n");
  }

  printf("Total harganya setelah diskon %.3f\n", TOTAL_PRICE(total, diskon));

  /* Program exited correctly */
  return 0;
}
