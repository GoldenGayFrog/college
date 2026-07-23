#include <stdio.h>

int main(void)
{
    int a,total;

    printf("masukkan banyak data: \n");
    scanf("%d", &a);

    for(int i=1; i <= a; i++) {
        total += i;
        printf("%d+", i);

    }

    printf("\b=%d", total);
}
