//write a c program to print the fibonacci series using for ,while and do while

#include <stdio.h>

void fibonacciusingfor(int n){
    int t1 = 0, t2 = 1, nextterm;
    printf ("using for loop: ");
    for (int i = 1; i<= n; ++i) {
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;

    }
    
    printf("\n");
}

void fibonacciusingwhile(int n){
    int t1 = 0, t2 = 1, nextterm;
    int i = 1;
    printf ("using while loop: ");
    while (i<=n) {
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
        i++;

    }
    
    printf("\n");
}

void fibonacciusingdowhile (int n){
    int t1 = 0, t2 = 1, nextterm;
    int i = 1;
    printf ("using do while loop: ");
    if ( n<= 0) return 0;
    do {
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
        i++;

    } while (i <= n);
    printf("\n");
}
   int main (){
    int n = 10;
    fibonacciusingfor(n);
    fibonacciusingwhile(n);
    fibonacciusingdowhile(n);

    return 0;
   }