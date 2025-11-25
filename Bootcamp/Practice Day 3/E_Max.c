// Max
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

// Example
// Input
// 5
// 1 8 5 7 5
// Output
// 8

#include <stdio.h>
#include <limits.h>

int main()
{
    int N, max = INT_MIN;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        int X;
        scanf("%d", &X);
        if (X > max)
        {
            max = X;
        }
    }

    printf("%d", max);

    return 0;
}