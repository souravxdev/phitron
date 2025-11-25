#include<stdio.h>

int main(){
    
    int firstNumber, secondNumber, thirdNumber;
    float avarage;

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    avarage = (firstNumber * secondNumber * thirdNumber) / 3;
    
    printf("Average: %.2f", avarage);
    return 0;
}