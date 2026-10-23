// swap of two integers using operators

#include <stdio.h>

int main(){
    int a, b;
    printf("enter two integers:");
    scanf("%d %d", &a ,&b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping: a =%d and b =%d", a , b);

    return 0;
}