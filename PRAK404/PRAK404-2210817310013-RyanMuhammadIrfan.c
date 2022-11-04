#include <stdio.h>

int main()
{
    int x;
    float y, z, h;

    while (x != 5)
    {
        printf("Pilih program\n");
        printf("1.Penjumlahan\n");
        printf("2.Pengurangan\n");
        printf("3.Perkalian\n");
        printf("4.Pembagian\n");
        printf("5.Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &x);
        if (x == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator RYANMUHAMMADIRFAN");
        }
        else if (x <= 0 || x >= 5)
        {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
        else
        {
            printf("Masukkan Nilai pertama : ");
            scanf("%f", &y);
            printf("Masukkan Nilai kedua : ");
            scanf("%f", &z);
            if (x == 1)
            {
                h = y + z;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", y, z, h);
            }
            else if (x == 2)
            {
                h = y - z;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", y, z, h);
            }
            else if (x == 3)
            {
                h = y * z;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", y, z, h);
            }
            else
            {
                h = y / z;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", y, z, h);
            }
        }
    }
}