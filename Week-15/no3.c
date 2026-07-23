#include <stdio.h>
int main()
{
    int jumlah=0, p=0, l=0,u=0,x=0;
    float totnilai = 0, rata = 0;
    int totumur = 0;

    printf("Masukkan jumlah pasien: ");
    scanf("%d", &jumlah);

    char nama[16][16], keluhan[16][16], gender[jumlah];
    int umur[jumlah], biaya[jumlah];

    printf("\n---------INPUT DATA-----------\n");
    for (int a = 0; a < jumlah; a++)
    {
        printf("\nPasien %d\n", a + 1);
        printf("Nama: ");
        scanf("%s", nama[a]);
        printf("Umur: ");
        scanf("%d", &umur[a]);
        printf("Keluhan: ");
        scanf("%s", &keluhan[a]);
        printf("Gender: ");
        scanf(" %c", &gender[a]);
        printf("Biaya: ");
        scanf("%d", &biaya[a]);
    }
    for(int a=0; a<jumlah; a++)
    {
        if(umur[a]<=17)
        {
            u++;
        }
        if(umur[a]>=17)
        {
            x++;
        }
        if(gender[a]== 'L' ||gender[a]== 'l')
        {
            l++;
        }
        if(gender[a]=='P'||gender[a]== 'p')
        {
            p++;
        }
        totumur += umur[a];
    }
    rata = totumur/jumlah;
    printf("Nama\t\tUmur\tKeluhan\tGender\tBiaya(Rp.)");
    printf("\n-------------------------------------------------\n");
    for (int a = 0; a < jumlah; a++)
    {
        printf("%s\t\t%d\t%s\t%c\t%d\n", 
            nama[a], umur[a], keluhan[a], gender[a], biaya[a]);
    }
    printf("\n=================================================\n");
    printf("\nRata rata umur pasien\t\t\t: %.2f", rata);
    printf("\nJumlah laki laki yang berobat\t\t: %d", l);
    printf("\nJumlah perempuan yang berobat\t\t: %d", p);
    printf("\nJumlah pasien anak anak yang berobat\t: %d", u);
    printf("\nJumlah pasien dewasa yang berobat\t: %d\n", x);
    getchar();
}
