#include <stdio.h>

int main()
{
    int s1, s2, s3, k, harga_tanah, biaya;
    s1 = 4;
    s2 = 5;
    s3 = 7;
    harga_tanah = 85000;

    printf("Diketahui: \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d,%d,%d \n", s1, s2, s3);
    k = s1 + s2 + s3;
    printf("Keliling Tanah Pak Deklek adalah %d\n", k);
    printf("Harga Tanah Per Meter adalah %d\n", harga_tanah);
    printf("Jawaban: \n");
    biaya = k * harga_tanah;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
}