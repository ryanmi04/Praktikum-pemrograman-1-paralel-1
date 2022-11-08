#include <stdio.h>
int reverse(int a, int reversed){
    while (a != 0){
        reversed *= 10;
        reversed +=  a%10;
        a /= 10;
    }
    return reversed;
}
int main(){
    int A, B,reversed=0;
    scanf("%d %d", &A, &B);
    A = reverse(A,reversed);
    B = reverse(B,reversed);
    int C = A + B;
    printf("%d", reverse(C,reversed));
}