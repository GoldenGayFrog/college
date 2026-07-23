#include <stdio.h>

int main(void)
{
  int x,y;

  printf("Masukkan nilai x: \n");
  scanf("%d", &x);

  printf("Masukkan nilai y: \n");
  scanf("%d", &y);

  if(x > 0 && y > 0) {
      printf("Kuadran 1\n");
  }

  else if(x < 0 && y > 0) {
      printf("Kuadran 2\n");
  }

  else if(x < 0 && y < 0) {
      printf("Kuadran 3\n");
  }

  else if(x > 0 && y < 0) {
      printf("kuadran 4\n");
  }

  else {
      printf("Diantara");
  };

  return 0;
}
