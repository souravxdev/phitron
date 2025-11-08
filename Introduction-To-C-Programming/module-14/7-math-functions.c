#include<stdio.h>
#include<math.h>

int main(){

    float a = 2.2;
    int b = ceil(a); // ceil function rounds up the value
    int c = floor(a); // floor function rounds down the value
    int d = round(a); // round function rounds to the nearest integer
    int s = sqrt(16); // sqrt function calculates the square root
    int p = pow(2, 3); // pow function calculates power
    int n = fabs(-10); // fabs function returns absolute value

    printf("Ceil: %d\n", b);
    printf("Floor: %d\n", c);
    printf("Round: %d\n", d);
    printf("Square Root: %d\n", s);
    printf("Power: %d\n", p);
    printf("Absolute: %d\n", n);

    return 0;
}