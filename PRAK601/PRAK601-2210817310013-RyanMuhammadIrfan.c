#include <stdio.h>

int main()
{
    int x, y, i, j, matriks[20][20];

    scanf("%d %d", &x, &y);

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}