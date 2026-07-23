#include <stdio.h>

int main()
{
    int n, i, total=0;

    printf("Masukkan jumlah data: "); scanf("%d", &n);

    int A[n];
    int B[n];
    int hasil[n];


    for (i=0;i<n;i++)
    {
        printf("\nMasukkan banyak barang ke-%d (A): ", i);scanf("%d", &A[i]);
        printf("Masukkan  harga barang ke-%d (B): ", i); scanf("%d", &B[i]);
    }

    printf("\nTABEL HASIL:\n");
    printf("A\tB\tHasil\n");

    for (i=0;i<n;i++)
    {
        hasil[i] = A[i] * B[i];
        total += hasil[i];
        printf("%d\t%d\tRp%d\n", A[i], B[i], hasil[i]);
    }


    printf("\nTotal: Rp.%d\n", total);

}
