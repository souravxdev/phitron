#include<stdio.h>

int main(){
    
    int firstNumber, secondNumber, thirdNumber, product;

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    product = firstNumber * secondNumber * thirdNumber;
    
    printf("Multiplication: %d", product);
    return 0;
}