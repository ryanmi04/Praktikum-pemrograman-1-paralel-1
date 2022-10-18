#include <stdio.h>

int main()
{
    float x, y, hasil;

    printf("Masukan Nilai Pertama :");
    scanf("%f", &x);

    printf("Masukan Nilai Kedua :");
    scanf("%f", &y);

    hasil = x + y;

    printf("\n");
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" ", x, y, hasil);
}