#include <stdio.h>

int main(void) {
    int pesanan;

    printf(
           "List Menu\n"
           "1. Kopi\n"
           "2. Teh\n"
           "3. Air\n"
           );

    scanf("%d", &pesanan);

    switch (pesanan) {
        case 1:
        printf("Pilih ukuran");
        break;

        case 2:
        printf("Pilih rasa");
        break;

        case 3:
        printf("Tetap segar!");
        break;
    }

    return 0;
}
