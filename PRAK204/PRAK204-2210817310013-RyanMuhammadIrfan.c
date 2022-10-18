#include <stdio.h>

int main()
{
    float phi, r, t, V, L, K;
    phi = 22.0 / 7.0;

    scanf("%f", &r);
    scanf("%f", &t);

    V = phi * r * r * t;
    L = 2 * phi * r * (r + t);
    K = 2 * phi * r;

    printf("\n");
    printf("Volume = %.2f\n", V);
    printf("Luas = %.2f\n", L);
    printf("Keliling = %.2f\n", K);
}