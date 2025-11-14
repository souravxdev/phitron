#include<stdio.h>

void hello(int i){ // recursive function
    if(i == 6){
        return;
    }
    hello(i + 1);
    printf("%d\n", i);
}

int main(){
    int i = 1;
    hello(i);
    return 0;
}