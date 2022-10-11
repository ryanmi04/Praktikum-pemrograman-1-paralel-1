#include <stdio.h>
#include <math.h>
int main()
{
    int A, T, sb, K, L;
    A = 5;
    T = 12;

    printf("Diketahui: \n");
    printf("Alas = %d ", A);
    printf("cm \n");
    printf("Tinggi = %d ", T);
    printf("cm \n\n");

    printf("Jawab:\n");
    printf("Sisi A = %d ", T);
    printf("cm \n");

    sb = (sqrt(A * A + T * T));
    printf("Sisi B = %d ", sb);
    printf("cm\n");

    printf("Sisi C = %d ", A);
    printf("cm\n");

    K = A + T + sb;
    printf("Keliling = %d ", K);
    printf("cm\n");

    L = A * T / 2;
    printf("Luas = %d ", L);
    printf("cm\n");
}