#include <stdio.h>

#define SIZEOF_ARRAY 6

int main(void)
{
    int data_angka[] = {1024,512,256,128,64,32};

    int *ptr = data_angka;

    while (ptr < data_angka + SIZEOF_ARRAY) {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}
