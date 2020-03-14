#include <stdio.h> 

int main () {
    int num1; 
    float num2; 
    printf("Digite um valor inteiro: \n");
    scanf("%d", &num1);
    printf("Digite um valor nao inteiro: \n");
    scanf("%f", &num2); 
    printf("Multiplicando os dois temos %f", num1 * num2);

    return 0;
}