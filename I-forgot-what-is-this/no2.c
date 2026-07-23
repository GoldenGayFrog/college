#include <stdio.h>

int Angka;

int main()
{
    for(Angka=2;Angka<=200;Angka++) {
            if(Angka % 3 == 0) {
        printf("%d\n", Angka);
            }
    }
}
