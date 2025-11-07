#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 5; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        count++;
        printf("\n");
    }
    printf("Total new lines printed: %d\n", count);
    return 0;
}