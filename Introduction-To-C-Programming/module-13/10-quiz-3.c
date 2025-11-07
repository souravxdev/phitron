#include<stdio.h>

int main(){

    int count = 0;
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= i; j++){
            count++;
            printf("*");
        }
    }
    printf("\nTotal stars printed: %d\n", count);
    return 0;
}