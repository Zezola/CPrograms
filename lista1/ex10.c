#include <stdio.h> 

int main () {
    int a,b, trocaA, trocaB;
    printf("Digite dois valores: \n");
    scanf("%d%d", &a, &b); 
    trocaB = a; 
    trocaA = b;
    printf("Valores iniciais: a = %d e b = %d\n", a, b); 
    printf("Valores trocados: a = %d e b = %d", trocaA, trocaB);
    return 0;
}