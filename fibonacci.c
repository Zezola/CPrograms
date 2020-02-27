#include <stdio.h> 

int main (void) {
    //Calcular ate o 5 termo da sequencia de fibonacci 
    int fib[4]; 
    fib[0] = 1; 
    fib[1] = 1; 
    for (int i = 2; i <= 4; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; 
    }

    for (int i = 0; i <= 4; i++) {
        printf("%d\n", fib[i]);
    }
    return 0;
}