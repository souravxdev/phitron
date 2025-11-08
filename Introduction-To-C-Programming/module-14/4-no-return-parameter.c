#include<stdio.h>

void sum(int a, int b){
    int ans = a + b;
    printf("Sum: %d\n", ans);
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x, y);

    return 0;
}