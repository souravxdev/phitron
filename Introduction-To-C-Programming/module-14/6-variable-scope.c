#include<stdio.h>

int x = 5; // global variable

int sum(){
    int a = 20; // this a variable is scoped withing the sum function
    printf("Sum: %d %d\n", a, x);
}

int main(){
    
    int a = 10; // this a variable is scoped within the main function
    printf("Main: %d %d\n", a, x);
    sum();
    return 0;
}