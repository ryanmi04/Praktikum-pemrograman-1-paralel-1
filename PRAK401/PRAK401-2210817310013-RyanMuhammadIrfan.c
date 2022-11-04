#include <stdio.h>

int main()
{
    int x, i;
    char y;

    scanf("%d %c", &x, &y);
    for (i = 1; i <= 50; i++)
    {
        if (i % x == 0)
        {
            printf("%c ", y);
        }
        else
        {
            printf("%d ", i);
        }
    }
}