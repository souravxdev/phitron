// right-angle triangle pattern with letters

#include <stdio.h>

int main()
{

    int n, star = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 1; j <= star; j++) // for printing capital letters in each line
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
        star++;
    }

    return 0;
}