#include<stdio.h>

int main(){

    int firstNumber, secondNumber, thirdNumber, sum, avarage; // declaration

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber); // taking inputs

    sum = firstNumber + secondNumber + thirdNumber; // calculation

    avarage = sum / 3; // calculation

    printf("Avarage: %d", avarage); // printing output
    return 0;
}