#include <stdio.h>


int main()
{
    int D, H, M, S;

    scanf("%d", &S);
    D = (S / 86400);
    S %= 86400;
    H = (S / 3600);
    S %= 3600;
    M = (S / 60);
    S %= 60;

    if (D >= 1)
    {
        printf("%d hari %.2d:%.2d:%.2d", D, H, M, S);
    }

    else
    {
        printf("%.2d:%.2d:%.2d", H, M, S);
    }
}