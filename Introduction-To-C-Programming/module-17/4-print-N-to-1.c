#include<stdio.h>

void hello(int i){ // recursive function
    if(i == 0){ // end condition -  base case
        return;
    }
    printf("%d\n", i);
    hello(i - 1); // increment / decrement
}

int main(){
    int N;
    scanf("%d", &N);
    int i = N; // initialization / starting
    hello(i);
    return 0;
}