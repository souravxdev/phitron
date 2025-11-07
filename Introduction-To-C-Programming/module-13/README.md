# Module - 13
### Nested Loop and Pattern

`Module Overview`
- Mastering Nested Loops
    - A journey from basic patterns to advanced algorithms using nested loops.
- Understanding Loop Patterns
    - What are nested loops?
        - Loops inside other loops.
    - Pattern benefits
        - Visual learning tool
    - Core applications
        - Matrix operations, graphics, algorithms
- Star Pattern Fundamentals
    - Define rows & columns
        - Set patterns dimensions
    - Outer loop controls rows
        - Tracks vertical positions
    - Inner loop handle columns
        - Places stars horizontally
    - Print characters
        - Output stars or spaces
- Pyramid Pattern Techniques
    - Advanced patterns logic
        - Balancing spaces and characters
    - Mathematical relationships
        - Using formulas for positionning
    - Conditional Printing
        - If-else controls character placement
- Creative Pattern Variations
    - Endless pattern possibilities though loop manipulation
- Problem Solving with Nested Loops
    - Identify Pattern
        - Recognize recurring structures
    - Sketch solution
        - Draw pattern on paper first
    - Test & Debug
        - Verify pattern correctness
    - Code implementation
        - Translate logic to neste loops
- Sorting Algorithms with Nested Loops
    - Bubble Sort
        - Simplest sorting algorithm
    - Slection Sort
        - Finds minimum element each pass
    - Insertion Sort
        - Builds sorted array incrementally


# Quiz of Module - 13

1. What will be the output of this pattern printing code?
```c
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= i; j++){
        printf("%d ", j)
    }
}
```
- 1 1 2 1 2 3 

2. Given an array [2,7,11,15] and X=9, which two elements sum to X?
- 2 & 7

3. How many stars(*) will this code print?
```c
for(int i = 1; i <= 4; i++){
    for(int j = 1; j <= i; j++){
        printf("*")
    }
}
```
- 10

4. What pattern will this code print?
```c
for(int i = 1; i <= 3; i++){
    for(int j = 1; j <= 3; j++){
        printf("%d ", i)
    }
}
```
- 1 1 1 2 2 2 3 3 3

5. How many lines will this code print?
```c
for (int i = 1; i <= 5; i += 2){
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf("\n");
}
```
- 3

6. What replaces "?"
```c
int num = 1;
for (int i = 1; i <= 3; i++){
    for (int j = 1; j <= ?; j++){
        printf("%d ", num++);
    }
    printf("\n");
}
```
- i

7. Given array: [4, 9, 3, 2, 5] and Target sum (X= 8). Which 0-indexed pair of elements sum to 8?
- Index 2 & 4

8. What's the output?
```c
for (int i = 3; i >= 1; i--){
    for (int j = 1; j <= i; j++){
        printf("*");
    }
    printf(" ");
}
```
- *** ** * 

9. What is the output after sorting this array in ascending order? [5, 2, 9, 1]
- [1, 2, 5, 9]

10. What is the output after sorting this array in descending order? [5, 2, 9, 1]
- [9, 5, 2, 1]✅ 


# Quiz Explanation of Module - 13
```c

1. What will be the output of this pattern printing code?

for(int i=1; i<=3; i++) {
    for(int j=1; j<=i; j++) {
        printf("%d ", j);
    }
}

A) 1 1 2 1 2 3 ✅ 
B) 1 2 3
C) 1 2 3 1 2 1
D) None

Explanation: এই কোডে i এর মান 1 থেকে 3 পর্যন্ত চলবে এবং প্রতিটি i এর জন্য j-এর মান 1 থেকে শুরু করে i পর্যন্ত প্রিন্ট হয়।
যখন i=1 হয় তখন শুধু 1 প্রিন্ট হয়
যখন i=2 হয় তখন 1 2 প্রিন্ট হয়
যখন i=3 হয় তখন 1 2 3 প্রিন্ট হয়
সুতরাং ফাইনাল উত্তর 1 1 2 1 2 3

2. Given an array [2,7,11,15] and X=9, which two elements sum to X?

A) 2 & 7 ✅ 
B) 7 & 11
C) 11 & 15
D) No pair

Explanation: অ্যারেতে 2 এবং 7 এর যোগফল 9 (X=9)। অন্য কোনো জোড়ার যোগফল 9 সম্ভব না।


3. How many stars (*) will this code print?

for(int i=1; i<=4; i++) {
    for(int j=1; j<=i; j++) {
        printf("*");
    }
}

A) 4
B) 10 ✅ 
C) 6
D) 16

Explanation: এই কোডে i এর মান 1 থেকে 4 পর্যন্ত চলবে। 
i=1 হলে 1 টি * প্রিন্ট করবে। 
i=2 হলে 2 টি * প্রিন্ট করবে। 
i=3 হলে 3 টি * প্রিন্ট করবে। 
i=4 হলে 4 টি * প্রিন্ট করবে। 
সর্বমোট স্টার (*) প্রিন্ট হবে =1+2+3+4=10 বার।


4. What pattern will this code print?

for(int i=1; i<=3; i++) {
    for(int j=1; j<=3; j++) {
        printf("%d ", i);
    }
}

A) 1 2 3 1 2 3 1 2 3
B) 1 1 1 2 2 2 3 3 3 ✅ 
C) 1 2 3
D) None
Explanation: বাইরের লুপের চলক i-এর মান হয় 1 থেকে 3 এবং ভিতরের লুপ প্রতিটি i-এর মানকে 3 বার প্রিন্ট করে।
যখন i=1 তখন 1 1 1
যখন i=2 তখন 2 2 2
যখন i=3 তখন 3 3 3
যেহেতু i এর প্রতি লুপ শেষ এ নিউ লাইন নাই তাই সব একই লাইনে দেখাবে।


5. How many lines will this code print?

for(int i=1; i<=5; i+=2) {
    for(int j=1; j<=i; j++) {
        printf("*");
    }
    printf("\n");
}

A) 2
B) 3 ✅ 
C) 5
D) 6

Explanation: 
বাইরের লুপটি চলবে i=1, i=3, i=5 (মোট 3 বার)। প্রতিটি লুপে:
i=1 হলে  1 টি * প্রিন্ট করে নতুন লাইনে যায় 
i=3 হলে  3 টি * প্রিন্ট করে নতুন লাইনে যায় 
i=5 হলে  5 টি * প্রিন্ট করে নতুন লাইনে যায় 
মোট লাইন সংখ্যা: 3 টি

6. What replaces “?” to print:
1  
2 3  
4 5 6

Code:

int num=1;
for(int i=1; i<=3; i++) {
    for(int j=1; j<=?; j++) {
        printf("%d ", num++);
    }
    printf("\n");
}


A) 3
B) i ✅ 
C) j
D) num

Explanation: বাইরের লুপ (i): এটি সারি নিয়ন্ত্রণ করে (১ম সারি, ২য় সারি, ৩য় সারি)
i=1 → ১ম সারি
i=2 → ২য় সারি
i=3 → ৩য় সারি
ভিতরের লুপ (j): এটি প্রতিটি সারিতে কতগুলো সংখ্যা প্রিন্ট হবে তা নির্ধারণ করে
১ম সারিতে 1 টি সংখ্যা (1)
২য় সারিতে 2 টি সংখ্যা (2 3)
৩য় সারিতে 3 টি সংখ্যা (4 5 6)
num ভেরিয়েবল: এটি 1 থেকে শুরু হয় এবং প্রতিবার প্রিন্ট করার পর 1 করে বাড়ে (num++)
আমাদের দরকার প্রতিটি সারিতে i সংখ্যক মান প্রিন্ট হবে অর্থাৎ ভিতরের লুপটি i বার চলবে।  তাই, প্রশ্ন চিহ্নের (?) স্থানে i আসবে।


7. Given array: [4, 9, 3, 2, 5]  and Target sum (X=8). Which 0-indexed pair of elements sum to 8?

A) Index 0 & 1
B) Index 1 & 3
C) Index 2 & 4 ✅ 
D) No such pair

Explanation: প্রদত্ত অ্যারে: [4, 9, 3, 2, 5] (0-ইনডেক্স ভিত্তিক)। ইনডেক্স 2 এর মান 3 এবং ইনডেক্স 4 এর মান 5, যার যোগফল: 3 + 5 = 8


8. Whats the output?

for(int i=3; i>=1; i--) {
    for(int j=1; j<=i; j++) {
        printf("*");
    }
    printf(" ");
}

A) *** ** * ✅ 
B) ******
C) * * *
D) None

Explanation: বাইরের লুপ (i): i-এর মান শুরু হয় 3 থেকে এবং 1 পর্যন্ত কমতে থাকে (i--) অর্থাৎ লুপটি চলবে 3 বার: i=3, i=2, i=1
ভিতরের লুপ (j): প্রতিটি i-এর মানের জন্য j (1 থেকে i) পর্যন্ত চলবে, অর্থাৎ 
i=3 হলে  j (1 থেকে 3) পর্যন্ত → 3 টি * প্রিন্ট হবে
i=2 হলে  j (1 থেকে 2) পর্যন্ত → 2 টি * প্রিন্ট হবে
i=1 হলে  j (1 থেকে 1) পর্যন্ত → 1 টি * প্রিন্ট হবে
নতুন লাইন: প্রতিটি ভিতরের লুপের শেষে space প্রিন্ট হবে 
আউটপুট: *** ** *


9. What is the output after sorting this array in ascending order? [5, 2, 9, 1]

A) [1, 2, 5, 9] ✅ 
B) [9, 5, 2, 1]
C) [1, 5, 2, 9]
D) No change

Explanation:  আসেন্ডিং অর্ডারে সাজানোর অর্থ হলো ছোট থেকে বড় সংখ্যার ক্রমে সাজানো। প্রদত্ত অ্যারে [5, 2, 9, 1]-কে আসেন্ডিং অর্ডারে সাজালে পাওয়া যায় [1, 2, 5, 9]


10. What is the output after sorting this array in descending order? [5, 2, 9, 1]

A) [1, 2, 5, 9]
B) [9, 5, 2, 1] ✅ 
C) [1, 5, 2, 9]
D) No change

Explanation:  ডিসেন্ডিং অর্ডারে সাজানোর অর্থ হলো বড় থেকে ছোট সংখ্যার ক্রমে সাজানো। প্রদত্ত অ্যারে [5, 2, 9, 1]-কে ডিসেন্ডিং অর্ডারে সাজালে পাওয়া যায় [9, 5, 2, 1]।
```


# Extra Practice Problem of Module - 13

1. Write code te get the following pattern.
```c
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
```
```c
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
            printf("* ");
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}
```

2. Write code te get the following pattern.
```c
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
```
```c
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
            printf("%d ", k);
        }
        printf("\n");
        star++;
        space--;
    }
    return 0;
}
```

3. Write code te get the following pattern.
```c
*****
 ****
  ***
   **
    *
```
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    int space = 0;

    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 0; j < space; j++) // for printing space
        {
            printf(" ");
        } 
        for (int k = star; k >= 1; k--) // for printing star
        { 
            printf("*");
        }
        printf("\n");
        star--;
        space++;
    }
    return 0;
}
```

4. Write code te get the following pattern.
```c
*********
 *******
  *****
   ***
    *
```
```c
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n * 2 - 1;
    int space = 0;

    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 0; j < space; j++) // for printing space
        {
            printf(" ");
        } 
        for (int k = star; k >= 1; k--) // for printing star
        { 
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}
```

5. Write code te get the following pattern.
```c
A 
A B 
A B C 
A B C D 
A B C D E 
```
```c
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
```