#include <stdio.h>

int main()
{
    int X, Y, i, j, A, B, C, hasil, t;

    scanf("%d %d", &X, &Y);
    for (i = 1; i <= X; i++)
    {
        for (j = i; j > 1; j--)
        {
            printf("(%d * %d) + ", j, Y);
        }
        for (A = 1, hasil = A * Y; A < i; A++, hasil += (A * Y))
        {
            printf("(%d * %d) = %d\n", j, Y, hasil);
        }
        for (B = 1, C = 1, t = 0; B <= X; C += B + 1, B++)
        {
            t += C * Y;
        }
    }
    printf("%d", t);
}