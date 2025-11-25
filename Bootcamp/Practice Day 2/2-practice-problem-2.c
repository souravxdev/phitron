#include<stdio.h>

int main(){
    int x, y, z, result;

    scanf("%d %d %d", &x, &y, &z);

    result = x * 2 + y * 3 + z * z;
    printf("Result: %d", result);
    return 0;
}