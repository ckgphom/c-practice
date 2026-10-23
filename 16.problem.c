#include <stdio.h>

int main(){
    double num1,num2,num3;

    printf("enter the three numbers:");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if (num1>=num2){
        if (num1>=num3){
            printf( "%.2f is largest number.\n",num1);
        } else {printf(
        "%.2f is the largest number.\n",num3);}
    } else{
        if (num2 >= num3) {
            printf( "%.2f is the largest number.\n", num2);
        }else{
        printf(" %.2f is the largest numer\n",num3);}
    }
    return 0;
}