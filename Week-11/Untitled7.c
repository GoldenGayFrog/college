#include <stdio.h>

int main() {
    int input=0;
    int bil1[10]={0}, bil2[10]={0}, bil3[10]={0};

    printf("Mau dibikin brp kali: ");
    scanf("%d", &input);

    for(int i=1;i<=input;++i){
        printf("Masukkan bilangan 1: ");
        scanf("%d", &bil1[i]);
    printf("Masukkan bilangan 2: ");
        scanf("%d", &bil2[i]);
        printf("Masukkan bilangan 3: ");
        scanf("%d", &bil3[i]);
    }

    for(int i=1;i<=input;i++) {
        bil3[i]=bil1[i]+bil2[i];
    }

    printf("bil3={");
    for(int i=1;i<=input;i++) {
       printf("%d,", bil3[i]);
    }

    printf("\b}");

    return 0;
}
