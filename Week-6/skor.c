#include <stdio.h>

int main(void)
{
    int skor;

    scanf("%d", &skor);

    if (skor >= 80 && skor <= 89)
    {
        printf("B\n");
    }
    else if (skor >= 70 && skor <= 79)
    {
        printf("C\n");
    }
    else if (skor < 70)
    {
        printf("D\n");
    }
    else
    {
        printf("A\n");
    }

    return 0;
}
