#include <stdio.h>

int main()
{
    int angka;

    printf("Masukan bilangan:");
    scanf("%d", &angka);

    if (angka > 0)
    {
        printf("positif");
    }

    else if (angka < 0)
    {
        printf("negatif");
    }

    else
    {
        printf("nol");
    }
}