 // write a c program to read two numbers and arrange them in ascending order using simple statement

 #include <stdio.h>
 
 int main(){
    int a , b, temp;
    printf("enter the two numbers: ");
    scanf("%d %d ",&a, &b);
    if (a > b ){
        temp = a;
        a = b;
        b = temp;
    }
    printf("the values in ascending orders: %d, %d", a,b);
    return 0;
 }