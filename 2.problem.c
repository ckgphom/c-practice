// convert degree celsius in fehrenheit

#include <stdio.h>

int main(){
    float c,fh;
    printf("enter the temperature in celsius:");
    scanf("%f", &c);
    fh = ( c*1.8)+32;
    printf("the temperature in fahrenheit is %f", fh);
    return 0;
}