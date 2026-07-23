#include <stdio.h>

int main()
{
    char nick[20];
    int age;
    char check;

    do {
        printf("Nama anda: ");
        scanf("%s", &nick);
        printf("Usia anda: ");
        scanf("%d", &age);
        if(age<17) {
            printf("Nama anda %s\ntermasuka kategori Anak-anak\n", nick);
        } else
            if(age >= 18 && age <= 22) {
                printf("Nama anda %s\ntermasuka kategori Remaja\n", nick);
            } else
                if(age >= 23 && age <= 50) {
                    printf("Nama anda %s\ntermasuka kategori Dewasa\n", nick);
                } else {
                    printf("Nama anda %s\ntermasuka kategori Lansia\n", nick);
                }
        printf("Apakah anda ingin cek lagi(y/n)? ");
        scanf(" %c", &check);
    }

    while(check == 'y');
}
