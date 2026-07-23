#include <stdio.h>

int main()
{
    int a[5] = {2, 4, 7, 8, 8}, b[5] = {3000, 400, 1000, 800, 7500}, hasil[5], total = 0, i;


    for(i = 0; i < 5; i++)
    {
        hasil[i] = a[i] * b[i];
        printf("\nHarga %d = %d", i, hasil[i]);

        total += hasil[i];
    }
    printf("\nTotal \t= %d", total);

    return 0;
}
