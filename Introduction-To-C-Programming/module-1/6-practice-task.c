// Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  

#include<stdio.h>

int main(){
    int fNum;
    int sNum;
    printf("Enter the first number: ");
    scanf("%d", &fNum);
    printf("Enter the second number: ");
    scanf("%d", &sNum);

    printf("Printing the second number: %d\n", sNum);
    printf("Printing the first number: %d\n", fNum);
}