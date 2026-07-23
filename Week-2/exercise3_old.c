#include <stdio.h>

int main(void)
{
  int a, b, h1, h2, h3, h4;

  /* The `;` is called as Semicolon Operator, It is used as terminator for each expression lines.
   * The compiler wouldn't know where to end things if you forgot to put `;` after your code
   * And It will throws an error because you confuse the compiler. */
  printf("Masukkan angka yang akan dihitung ;\n");scanf("%d", &a);
  /* The `&` operator is used to get the lvalue (address) of variable that you stated.
   * You could get the address of that variable with %p on the format string*/
  printf("Masukkan angka ke 2 yang akan dihitung ;\n");scanf("%d", &b);

  h1=a+b;
  h2=a-b;
  h3=a*b;
  h4=a/b;

  printf("Hasil Penambahan=%d\n\
          Hasil Perkurangan=%d\n\
          Hasil Perkalian=%d\n\
          Hasil Pembagian=%d\n"\
          ,h1,h2,h3,h4);

  /* The program exited successfully */
  return 0;
}
