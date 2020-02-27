#include <stdio.h> 

int main (void) {
    float notas[4]; 
    float total = 0; 
    float media = 0;

    printf("Insira 5 notas: \n"); 
    for ( int i = 0; i < 5; i++) {
        printf("Entre com a nota %d \n", i + 1);
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    media = total / 5;
    printf("A media vale: %.2f\n", media);

    return 0; 
}