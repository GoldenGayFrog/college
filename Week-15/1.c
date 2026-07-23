#include <stdio.h>

int main() {
    int m, n, p; // declare a variables

    printf("Masukkan ordo matriks A (m x n):\n");
    printf("m = ");scanf("%d", &m);
    printf("n = ");scanf("%d", &n);

    printf("Masukkan ordo matriks B (n x p):\n");
    printf("n = %d\n", n);
    printf("p = ");scanf("%d", &p);

    int A[10][10], B[10][10], C[10][10];

    printf("\nMasukkan elemen-elemen matriks A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("matriks A[%d][%d] = ", i , j );
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMasukkan elemen-elemen matriks B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("matriks B[%d][%d] = ", i , j );
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0; // Gives 0 value to C to make it initialize
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Var A times Var B add to Var C
            }
        }
    }

    printf("\nHasil perkalian matriks A dan B adalah:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t ", C[i][j]); // Printout the output from Var C
        }
        printf("\n");
    }

    return 0;
}
