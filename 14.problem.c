#include <stdio.h>

int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d", &a,&b);
    if (a > b){
    printf("ascending orders :%d %d", b, a);}
    else{printf("ascending orders is :", a, b);}
    return 0;
}