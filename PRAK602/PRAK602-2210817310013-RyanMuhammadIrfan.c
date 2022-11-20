#include <stdio.h>

int main()
{
    int x, i, j, hasil, number[20];
    scanf("%d", &x);

    for (i = 0; i < x; i++)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < x; i++)
    {
        hasil = number[i] * (1 + i);
        printf("%d ", hasil);
    }
}
