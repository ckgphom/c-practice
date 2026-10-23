#include <stdio.h>

int main(){
    char ch;
    printf("enter the characters:");
    scanf("%c", &ch);
    if(ch >= 'A' && ch<= 'Z')
    {printf("'%C'it is a uppercase letter",ch);}
        else if ( ch >= 'a' && ch <= 'z')
        {printf("'%c' it is a lowercase",ch);}
        else if (ch>= '0' && ch<=9)
        { printf("'%c' is a digit",ch);}
        else printf("it is a special character");
    return 0;
}