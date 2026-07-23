#include <stdio.h>

int a;

int main()
{
    do
    {
         if (a%2==0) {
            printf("Bil genap %d\n", a);

        }
        a++;
    }

   while(a<=300);
}
