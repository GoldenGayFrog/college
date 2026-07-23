#include <stdio.h>

int main(void)
{
  // Variables
  int sisi_kubus, luas_permukaan, volume;

  // Input
  printf("Masukkan sisi kubus\n");
  scanf("%2d", &sisi_kubus);

  printf("\n===========================================================\n");

  if (luas_permukaan > 50)
  {
      printf("\nLuas Permukaan Kubus adalah %d", luas_permukaan);
      printf("\nVolume Kubus adalah %d", volume);
  } else {
      printf("\nLuas permukaan kurang dari 50 Cm");
  }

  printf("\n===========================================================\n");

  return 0;
}
