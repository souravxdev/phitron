// right side right-angle triangle pattern

#include <stdio.h>

int main()
{

    int n, value = 1;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        } 
        for (int k = 1; k <= value; k++) // for printing star
        { 
            printf("%d ", k);
        }
        printf("\n");
        value++;
        space--;
    }
    return 0;
}