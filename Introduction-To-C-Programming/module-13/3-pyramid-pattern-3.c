// pyramid pattern

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         // print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // print stars (2*i - 1 stars in each line)
//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main()
{

    int n, star = 1;
    scanf("%d", &n);
    int space = n - 1;

    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        } 
        for (int k = 1; k <= star; k++) // for printing star
        { 
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}