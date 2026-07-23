#include <stdio.h>

int Angka=2;

int main()
{
    do {
        if(Angka % 3 == 0) {
            printf("Angka %d\n", Angka);
        }
        Angka++;
    }

    while(Angka<=200);
}

