#include <stdio.h>

int main()
{
    char nilai[5][5] =
    {
        {'A', 'B', 'D', 'A', 'C'},
        {'B', 'B', 'D', 'E', 'C'},
        {'B', 'B', 'D', 'A', 'B'},
        {'C', 'A', 'A', 'E', 'C'},
        {'B', 'B', 'C', 'A', 'C'}
    };
    char kunci[5] = {'B', 'B', 'D', 'E', 'C'};

    int i, j;
    int skor[5] = {0};
    int max = 0;
    int siswa_tertinggi = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (nilai[i][j] == kunci[j])
            {
                skor[i] += 20;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("nilai siswa %d: %d\n", i + 1, skor[i]);
        if (skor[i] > max)
        {
            max = skor[i];
            siswa_tertinggi = i + 1;
        }
    }
    printf("\nSiswa dengan nilai tertinggi adalah siswa %d dengan nilai %d\n", siswa_tertinggi, max);
}
