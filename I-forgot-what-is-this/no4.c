#include <stdio.h>

int main()
{
    char i[15];
    printf("Masukkan nama: ");
    scanf("%s", i);

    for(int a=1; a<=100; a++) {
        printf("Nama saya %s\n"
        "Saya yakin, akan menjadi orang sukses\n", i);
    }
}
