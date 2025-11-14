#include<stdio.h>

void printNumber(int i, int N){
    if(i == N + 1){
        return;
    }
    printf("%d\n", i);
    printNumber(i + 1, N);
}

int main(){
    int N;
    scanf("%d", &N);
    printNumber(1, N);
    return 0;
}