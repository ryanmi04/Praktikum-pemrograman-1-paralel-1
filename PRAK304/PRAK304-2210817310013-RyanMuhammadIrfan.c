#include <stdio.h>

int main()
{
    int bilangan;

    printf("Masukan bilangan:");
    scanf("%d", &bilangan);

    if (bilangan == 0)
    {
        printf("Nol");
    }

    else if (bilangan >= 1 && bilangan < 10)
    {
        printf("Satuan");
    }

    else if (bilangan >= 10 && bilangan < 20)
    {
        printf("Belasan");
    }

    else if (bilangan >= 20 && bilangan < 100)
    {
        printf("Puluhan");
    }

    else
    {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}