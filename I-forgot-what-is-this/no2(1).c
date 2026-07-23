#include <stdio.h>
int Angka=2;

int main()
{
   while(Angka<=200)
    {
        if(Angka % 3 == 0) {
        printf("Angka %d\n", Angka);
        }
        Angka++;
    }
}
