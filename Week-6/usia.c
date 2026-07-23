#include <stdio.h>

int main(void)
{
    int usia;

    scanf("%d", &usia);

    if (usia < 13)
    {
        printf("Anak Anak");
    }
    else if (usia >= 13 && usia <= 19)
    {
        printf("Remaja");
    }
    else
    {
        printf("Dewasa");
    }

    return 0;
}
