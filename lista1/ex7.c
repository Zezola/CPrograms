#include <stdio.h> 

int main () {
    int num; 
    printf("Digite um valor para calcularmos a tabuada: \n");
    scanf("%d", &num); 
    for ( int i = 1; i <= 10; i++) {
        printf("%d X %d = %d \n", num, i, num * i);
    }
    return 0;
}