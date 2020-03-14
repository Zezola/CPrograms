#include <stdio.h> 

int main () {
    float num1,num2; 
    printf("Digite dois valores NAO inteiros: \n");
    scanf("%f%f", &num1,&num2); 
    printf("Soma %f", num1 + num2);
    return 0;
}