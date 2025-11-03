#include <stdio.h>

int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Print the integer: ");
    printf("%d", a);

    float f;
    printf("\nEnter a float: ");
    scanf("%f", &f);
    printf("Print the float: ");
    printf("%f", f);

    char c;
    printf("\nEnter a character: ");
    scanf(" %c", &c);
    printf("Print the character: ");
    printf("%c", c);

    // scanf("%d %f %c", &a, &f, &c);
    // printf("%d %f %c", a, f, c);
    return 0;
}

