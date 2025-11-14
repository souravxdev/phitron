#include<stdio.h>

void printILoveRecursion(int i, int N){
    if(i == N + 1){
        return;
    }
    printf("I love Recursion\n");
    printILoveRecursion(i + 1, N);
}

int main(){
    int N;
    scanf("%d", &N);
    printILoveRecursion(1, N);
    return 0;
}