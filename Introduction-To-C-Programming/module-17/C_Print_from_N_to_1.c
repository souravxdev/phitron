#include<stdio.h>

void printNumber(int i){
    if(i == 0){
        return;
    }
    printf("%d ", i);
    printNumber(i - 1);
}

int main(){
    int N;
    scanf("%d", &N);
    printNumber(N);
    return 0;
}