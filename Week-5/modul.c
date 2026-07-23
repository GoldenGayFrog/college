#include <stdio.h>

int main(void)
{
  int inputSatu = 0, inputDua = 0, jumlah = 0;

  printf("Masukkan bilangan 1: \n");
  scanf("%5d", &inputSatu);

  printf("Masukkan bilangan 2: \n");
  scanf("%5d", &inputDua);

  jumlah = inputSatu + inputDua;

  if(jumlah % 2 == 0) {
      printf("Penjumlahannya Genap\n");
  }

  else {
      printf("Penjumlahannya Ganjil\n");
  };

  return 0;
}
