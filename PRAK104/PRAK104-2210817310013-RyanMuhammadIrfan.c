#include <stdio.h>

int main()
{
     int A, B, diskonA, diskonB, totalA, totalB;
     A = 400000;
     B = 350000;
     diskonA = 100 - 13;
     diskonB = 100 - 21;

     printf("Harga sepatu A adalah %d\n", A);
     printf("Harga sepatu B adalah  %d\n", B);

     totalA = diskonA * A / 100;
     totalB = diskonB * B / 100;
     printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", totalA);
     printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", totalB);
}