#include <stdio.h>

int main()
{
    int x,i;
    scanf("%d", &x);
    for (i= 1; i<= x; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for (i=x; i>=1; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}