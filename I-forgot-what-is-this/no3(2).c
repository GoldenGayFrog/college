#include <stdio.h>

int i, n;

int main()
{
    printf("Masukkan Angka: ");
    scanf("%d", &n);


    do
    {
        printf("Angka %d\n", i);
        i++;
    }

   while(i<=n);
}

