#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum;
    scanf("%d", &sum);

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[j] + a[k] == sum)
            {
                flag = 1;
                printf("Pair found: (%d, %d)\n", a[j], a[k]);
            }
        }
    }
    if (flag == 0)
    {
        printf("No such pair found\n");
    }
    return 0;
}