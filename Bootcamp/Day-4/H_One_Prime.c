// One Prime
// time limit per test3 seconds
// memory limit per test64 megabytes
// Given a number X. Determine if the number is prime or not

// Note:

// A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

// In other words : prime number divisible only by 1 and itself.

// Be careful that 1 is not prime .

// The first few prime numbers are

// Input
// Only one line containing a number X (2 ≤ X ≤ 105).

// Output
// print "YES" if the number is prime and "NO" otherwise.

// Examples
// Input
// 7
// Output
// YES
// Input
// 15
// Output
// NO
// Note
// First Example :

// 7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

// Second Example :

// 15 not is prime because it is divisible by 3 ,5, so the answer is NO.

#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    int isPrime = 1;

    for (int i = 2; i <= X - 1; i++)
    {
        if (X % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}