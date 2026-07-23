#include <stdio.h>

int main (void)
{
    int usia;
    char anggota;

    scanf("%d %c", &usia, &anggota);

    if(usia >= 18 && (anggota == 'y' || anggota == 'Y'))
    {
        printf("Dapat mendaftar");
    }
    else
    {
        printf("Tidak memenuhi syarat");
    }
}
