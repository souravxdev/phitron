#include<stdio.h>

int main(){
    
    int dividend, devider, remainder;

    scanf("%d %d", &dividend, &devider);

    remainder = dividend % devider;
    
    printf("Remainder: %d", remainder);
    return 0;
}