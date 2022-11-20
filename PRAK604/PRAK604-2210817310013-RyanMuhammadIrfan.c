#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, panjang1, panjang2, A = 0, B = 0;
    char karakter1[50], karakter2[50];
    scanf(" %[^\n]%*c", &karakter1);
    scanf(" %[^\n]%*c", &karakter2);
    panjang1 = strlen(karakter1);
    panjang2 = strlen(karakter2);

    if (panjang1 != panjang2)
    {
        printf("Panjang kalimat berbeda, pesan palsu");
    }

    else
    {
        for (i = 0; i < panjang1; i++)
        {
            if (karakter1[i] == ' ' && karakter2[i] == ' ')
            {
                continue;
            }
            else if (karakter1[i] == karakter2[i])
            {
                printf("*");
                A++;
            }
            else
            {
                printf("#");
                B++;
            }
        }

        printf("\n* = %d", A);
        printf("\n# = %d\n", B);
        if (A >= B)
        {
            printf("Pesan Asli\n");
        }
        else
        {
            printf("Pesan Palsu");
        }
    }
}