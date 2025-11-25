#include<stdio.h>

int main(){
    
    int base, height;
    float areaOfTriangle;

    scanf("%d %d", &base, &height);

    areaOfTriangle = 0.5 * base * height;
    
    printf("Area of Triangle: %.2f", areaOfTriangle);
    return 0;
}