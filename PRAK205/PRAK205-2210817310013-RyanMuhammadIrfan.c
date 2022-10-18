#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, K, L;

    scanf("%d", &A);
    scanf("%d", &B);

    C = sqrt(B * B - A * A);
    K = A + B + C;
    L = C * A / 2;

    printf("\n");
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm^2\n", L);
}