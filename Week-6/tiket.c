#include <stdio.h>

int main(void) {
    int usia, diskon;

    scanf("%d", &usia);

    if (usia < 12) {
        diskon = 30000;
    } else if (usia >= 12 && usia <= 60) {
        diskon = 50000;
    } else {
        diskon = 20000;
    }

    printf("Harganya %d", diskon);

    return 0;
}
