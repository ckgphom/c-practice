#include <stdio.h>

int main(){
    int i =0 , j = 1, sum = 0,n;
    printf("enter the value of n:");
    scanf("%d", &n);
     
    for ( int a = 1; a <= n; a++) {
        printf("%d\n", i);
        sum = i + j;
        i = j;
        j = sum;
    }
        return 0;
}