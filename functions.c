#include <stdio.h> 

int mult (int x, int y); //Prototipo da funçao

int main () {

    int num1, num2; 
    printf("Digite dois numeros para serem multiplicados\n"); 
    scanf("%d", &num1); 
    scanf("%d", &num2); 
    printf("O resultado vale %d", mult(num1, num2));

    return 0;
}

int mult (int x, int y) { //Funçao
    return x * y;
}