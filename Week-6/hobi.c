#include <stdio.h>

int main(void) {
    int pesanan;

    printf(
           "List hobi\n"
           "1. olahraga\n"
           "2. membaca\n"
           "3. berkebun\n"
           );

    scanf("%d", &pesanan);

    switch (pesanan) {
        case 1:
        printf("Bagus untuk kesehatan");
        break;

        case 2:
        printf("Tingkatkan pengetahuan");
        break;

        case 3:
        printf("Nikmati alam");
        break;
    }

    return 0;
}
