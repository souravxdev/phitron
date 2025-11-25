// Multiple or not | Phitron
// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a).

// Constraints
//  1 <= a, b <= 10000

// Input format 
//  Input will contain two integers a, b.

// Output Format
// Print "Yes" if one is the multiple of the other and "No" otherwise.

// Sample Input 1
// 5 9
// Sample Output 1
// No

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0) // দুটি সংখ্যা একে ওপরের গুণিতক কিনা সেটা প্রমাণের জন্য আমরা সংখ্যা দুটির একে ওপরের ভাগশেষ শূন্য কিনা সেটা নির্ণয় করবো।
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}