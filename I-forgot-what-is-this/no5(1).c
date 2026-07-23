#include <stdio.h>

int a;

int main()
{
    while(a<=300) {
        if (a%2==0) {
            printf("Bil genap %d\n", a);

        }
        a++;
    }
}
