#include <stdio.h> 


int main (void) {
    float notas[3][3];
    int linha, coluna; 

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Digite a nota [%d][%d]: \n", linha, coluna); 
            scanf("%f", &notas[linha][coluna]);
        }
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%.2f  ", notas[linha][coluna]);             
        }
        printf("\n");
    }

    
    return 0;
}