//swapping of two integers using comma operators
#include <stdio.h>

int main(){
    int a, b, temp;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping:");
    printf("a is %d and b is %d", a,b);
    return 0;
}