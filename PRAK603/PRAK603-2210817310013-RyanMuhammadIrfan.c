#include <stdio.h>

int main()
{
    int a, x, y, i, j, number1[20], number2[20], hasil;

    scanf("%d %d", &x, &y);

    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            scanf("%d", &number1[i]);
        }
        for (i = 0; i < y; i++)
        {
            scanf("%d", &number2[i]);
        }

        for (i = 0; i < x; i++)
        {
            hasil = number1[i] * number2[i];
            printf("%d ", hasil);
        }
    }

    else
    {
        printf("Jumlah tidak sama");
    }
}