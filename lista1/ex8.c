#include <stdio.h> 

int main () {
    float a,b,c; 
    printf("Digite 3 valores: \n");
    scanf("%f%f%f", &a,&b,&c); 
    printf("Resultado da expressao: %.2f", (a * b)/c);
    return 0;
}