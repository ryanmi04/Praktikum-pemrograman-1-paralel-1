#include <stdio.h>

int main()
{
    int a,b,i,j,o,p,q,hasil,t;

    scanf("%d %d", &a, &b);
    for (i = 1; i <=a; i++){
        for ( j = i; j > 1; j--){printf("(%d*%d) +", j, b);}
        for ( o = 1, hasil = o * b; o < i; o++, hasil += (o*b));{
         printf("(%d*%d) = %d\n",j,b,hasil);}
    for ( p = 1,q = 1, t = 0; p <= a; q+= p+1,p++){
        t += q * b;}}
 printf("%d",t);
}