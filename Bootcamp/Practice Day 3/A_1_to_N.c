// 1 to N
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print numbers from 1 to N in separate lines.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above.

// Example
// Input
// 5
// Output
// 1
// 2
// 3
// 4
// 5

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}