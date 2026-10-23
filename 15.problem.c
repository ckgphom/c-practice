#include <stdio.h>

int main(){
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z'){printf("it is a lowercase letter:%c", ch);}
    else if(ch>='A' && ch<='Z'){printf("it is a uppercase letter:%c", ch);}
    else if(ch>='0' && ch<='9'){printf ("it is a digit:%c", ch);}
    else {printf("it is a special character:%c", ch);}
        return 0;
}