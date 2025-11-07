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


    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[j] < a[k]) // descending order
            {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}