//fibonacci for ,while and do while 
#include <stdio.h>

int main(){
    int i=0, j=1, sum=0,n, a=1;
    printf("enter the value of n:");
    scanf("%d", &n);

    while  ( a<=n ){
        printf("%d \n", i);
        sum=i+j;
        i=j;
        j=sum;
        a++;
    }
    return 0;
}