#include <stdio.h>

int main()
{
    float L, r, jarak, phi, angka;
    L = 5;
    jarak = 14;
    phi = 3.14;
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f\n", L, "Putaran");
    printf("Jarak tempuh Pak Dengklek = %.0f ", jarak);
    printf("Kilometer\n\n");
    printf("Jawaban: \n");
    r = (jarak / L) / (phi * 2);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f", r);
}