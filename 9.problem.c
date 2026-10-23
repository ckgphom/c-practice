// write a c program to read the marks of the students and display pass or fail(pass mark is 40) using if else


#include <stdio.h>

int main(){
    int marks;
    printf(" enter your english marks:");
    scanf("%d",&marks);
    if (marks>= 40){printf("congragulations you are passed");}
    else{printf("you are failed,study more harder");}

    return 0;
}