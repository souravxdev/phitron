// reverse right-angle triangle pattern

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) // for printing lines
//     { 
//         for (int j = i; j <= n; j++) // for printing * in each line
//         { 
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;

    for (int i = 1; i <= n; i++) // for printing lines
    { 
        for (int j = 1; j <= star; j++) // for printing * in each line
        { 
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}