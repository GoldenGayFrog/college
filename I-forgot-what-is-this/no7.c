#include <stdio.h>

int main() {
    int bilangan, a, total = 0, min, max;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan);
    total = bilangan;
    min = max = bilangan;

    for (a = 2; a <= 10; a++) {
        printf("Masukkan bilangan : ");
        scanf("%d", &bilangan);

        total = bilangan;

        if (bilangan % 3 == 0) {
            printf("Bilangan habis dibagi 3, ");
        } else if (bilangan % 8 == 0) {
            printf("Bilangan habis dibagi 8, ");
        } else if (bilangan % 2 == 0 && total % 5 == 0) {
            printf("Bilangan habis dibagi 2 dan 5, ");
        } else {
            printf("Bilangan tidak habis dibagi 2, 3, 5, 8, ");
        }

        if (total % 2 == 0) {
            printf("Dan bilangan genap\n");
        } else {
            printf("Dan bilangan ganjil\n");
        }


        if (bilangan > max) {
            max = bilangan;
        }
        if (bilangan < min) {
            min = bilangan;
        }
    }

    printf("\nTotal dari seluruhnya adalah %d", total);
    printf("\nBilangan tertinggi adalah %d", max);
    printf("\nBilangan terendah adalah %d", min);

}
