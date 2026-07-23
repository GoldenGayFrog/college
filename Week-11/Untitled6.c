#include <stdio.h>

int main()
{
    int jumlah=0;
    int bil[6]={20,50,60,40,58};
    int length = 5;


    printf("Data Array");
    for (int i=0; i<length; i++){
        printf("\nOutput Data ke - %d",bil[i]);
        jumlah+=bil[i];
    }
    printf("\nJumlah dari data Array adalah %d", jumlah);
}
