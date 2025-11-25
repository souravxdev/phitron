#include<stdio.h>

int main(){

    int firstNumber, secondNumber, thirdNumber, sum; // declaration

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber); // taling inputs

    sum = firstNumber + secondNumber + thirdNumber; // calculation

    printf("Summation: %d", sum); // printing output
    return 0;
}