// write a c program to read the person's age and check whether the person is eligible for to vote 18 above uding if else statement 

#include <stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    
    if (age >=18){printf("you are eligible"); }
    else
        {printf("you are not eligible"); }
    return 0;
}