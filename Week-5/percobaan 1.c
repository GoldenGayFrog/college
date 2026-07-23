#include <stdio.h>

int main(void)
{
  // Declaration variables
  int bill, bil2;

  printf("Masukkan Bilangan 1: \n");
  scanf("%d", &bill);
  printf("Masukkan Bilangan 2: \n");
  scanf("%d", &bil2); //conditional Statements I

  if(bill > bil2) {
    printf("Bilangan lebih besar dari kilangan 2\n");
  }

  /* Program exited correctly */
  return 0;
}
