# Module - 2

### Operators, Conditional Statements

`Module Overview`

-   Arithmatic Operators in C
    -   Basic Operations
        -   C provides standard arithmatic operators: addition(+), subtraction(-), multiplication(\*), and division(/).
        -   For example, `int sum = a + b;` adds values stored in variables a and b.
    -   Special Operations
        -   The modulus operator(%) calculates the remainder after division, commonly used to determine if numbers are odd or even with `if(number % 2 == 0)`.
    -   Increment/Decrement
        -   The increment(++) and decrement(--) operators add or subtract 1 from a variable. They can be used as prefix or postfix, with subtle differences in behavior.
-   When arithmatic operation involve different data types, C performs automatic type conversion according to specific rules. Understanding these rules helps prevent unexpected results in calculation.

-   Relational Operators in C
    -   Equality Operators
        -   Equal to(==) and not equal to(!=) compare if two values are identical or different.
    -   Comparison Operators
        -   Greater than(>), less than(<), greater than or equal to(>=), and less than or equal to(<=).
    -   Usage in Code
        -   Always returns a boolean value(1 for true, 0 for false) that can be used in conditions.
-   A common mistake for begginers is confusing the assignment operator(=), and equality operator(==). Remember that `if( x=5 )` assigns 5 to x, while `if(x == 5)` checking if x equals to 5.

-   Logical Operators in C
    -   Logical AND (&&)
        -   Returns true only when both conditions are true.
        -   `if(age > 18 && hasLicense)`
        -   Short-circuits if one condition is false
    -   Logical OR (||)
        -   Returns true when at least one condition is true
        -   `if( isAdmin || hasPermission )`
        -   Short-circuits if one condition is true
    -   Logical NOT (!)
        -   Inverts the logical value of its operand.
        -   `if( !isLoggin )`
        -   Converts 0 into 1, and 1 into 0
-   Undrestanding short-circuit evaluation is crucial: in a logical AND operation, if one condition is false, the other condition is not evaluated since the result will always be false.

-   Conditional Statements: If-else
    -   Simple if Statement
        -   Executes code block only if condition is true
    -   If-else Statement
        -   Provides alternative execution path when condition is false
    -   If-else ladder
        -   Tests multiple conditions sequentially
-   The if statement is the fundamental building block for decision-making in C. When the condition inside the parameter evaluates non-zero(true), the code block following it executes. Otherwise, the program skips that block and continues execution after it.
-   Unlike some other languages, C does not have a dedicated boolean type - it uses integers where non-zero values are considered true, and zero values are considered false.

-   Nested If-Else: Creating Complex Logic
    -   Careful Indentation: Essential for redability
    -   Always Use Braces: Prevents logic errors
    -   Limit Nesting Depth: Keep below 3-4 levels
    -   Refactor When Possible: Use functions for clarity
-   Nested if-else statements allow for implementing complex decision trees, but they can quickly become unwieldy. For example, validation someting might require checking multiple conditions: if the input is numeric, if it's within a valid range, and if it meets specific criteria.

-   While powerfull, excessive nesting creates "arrow code" or "pyramid of doom" patterns that are difficult to maintain. Consider refactor complex conditions into separate functions with meaningful names to improve readability and maintainability.

`Arithmatic Operator`

-   Operator is a symbol, যা দুটি number/variable এর ভিতরে বসে একটা fixed operation করতে পারে, একটা value return করে।
-   C Programming এ (+, -, \*, /, %) 5 ধরনের arithmatic operator আছে।
-   এরা দুটি value এর ভিতরে বসে, নির্দিস্ট operation করে একটা value return করে।
-   Division এর ক্ষেত্রে input নেয়া value গুলো integer হলে, automatically compiler division এর result কেও integer এ convert করে ফেলে (ভগ্নাংশ হলেও)। এক্ষেত্রে সঠিক মান পাওয়া যাবে না।
-   যদি ভগ্নাশ তে result পেতে চাই, তাহলে যেকোনো একটা variable কে float এ নিতে হবে, এবং যেখানে division এর ফলাফল কে রাখা হচ্ছে সেই variable টাকেও float এ নিতে হবে।
-   Modulus operator ভাগশেষ নির্নয় করে।

`Relational Operator`

-   C Programming এ (<, >, <=, >=, ==, !=) 6 ধরনের relational operator আছে।
-   যা দুটি value এর ভিতরে বসে, তাদের মধ্যে প্রদত্ত relation check করে, true or false return করে।

`Assignment Operator`

-   C Programming এ (=) চিনহ দ্বারা কোন variable এ value assign করা হয়।

`Logical Operator`

-   C Programming এ (&&, ||, !) 3 ধরনের logical operator আছে।
-   && and ||, দুটি condition/relation এর ভিতরে বসে true or false return করে।
-   !, যেকোনো একটি condition এর আগে বসে, condition টাকে opposite করে দেয়।

`Conditional Statement`

-   Condition এর উপর নির্ভর করে কোন কাজ করা হবে কি হবে না!
-   if-else syntax:

```c
if( condition is true ){
    some task
}
else{
    another task
}
```

-   if-else if syntax:

```c
if( condition ){
    some task
}
else if( another condition ){
    another task
}
else{
    some other task
}
```

-   if-else ladder এর মধ্যে always একটা condition ই কাজ করবে। So, একটা if অথবা else if অথবা else run করবে। 
-   if-else ladder এর শুরু হয় if দিয়ে এবং শেষ হয় else দিয়ে।
-   Compiler প্রতিটি নতুন if এর জন্য একটা করে if-else ladder generate করে।
-   এবং একটা condition meet করলেই যেকোনো একটা ব্লক execute করবে, এবং সম্পূর্ণ if-else ladder execution বন্ধ হয়ে যাবে।
-   if-else ladder এর মধ্যে কোন ব্লক comment করলে নিচের ব্লক গুলো আর execute করতে পারে না।
-   কেবল ১টি if দিয়েও condition check করা যায়। else ব্যাবহার করাটা mandatory না।

-   nested if-else syntax:

```c
if( condition ){
    task 1
    if( another condition ){
        task 2
    }
    else{
        task 3
    }
}else{
        task 4
}
```

# Quiz of Module - 2

1. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    int a = 15 % 4;
    printf("%d", a);
}
```

-   3

2. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    double a = 15 / 4;
    printf("%lf", a);
}
```

-   3.000000

3. Here, 20 > 10 && 10 < 20, Is it true or false?

-   True

4. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    int a = 6;
    if( a > 5 ){
        printf("hi");
    }else if( a > 3 ){
        printf("bye");
    }
}
```

-   hi

5. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    int num = 5;
    if( num > 0 ){
        if( num < 10 ){
            printf("Small positive number");
        }
    }
    return 0;
}
```

-   Small positive number

6. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    int x = 10;
    int y = 12;
    if( x >= y || x <= y ){

            printf("hi");

    } else{
        printf("hello");
    }
    return 0;
}
```

-   hi

7. What will be the output of the following code?

```c
#include<stdio.h>

int main(){
    int x = 10;
    int y = 12;
    if( x >= y || x <= y ){

            printf("hi ");

    }
    printf("hello");
    return 0;
}
```

-   hi hello

8. Which of the following is not a logical or relational operator?

-   -

9. What will be the output of the following C code?

```c
#include<stdio.h>

int main(){
    int x = 5;
    if( x < 10 ){
        printf("hello ");
    }
    if( x == 5 ){
        printf("hi");
    }
    else{
        printf("no");
    }
    return 0;
}
```

-   hello hi

10. Why do we need relational operators?

-   To compare values and perform logical operations on them.

# Quiz Explanation of Module - 2

```c
1. What will be the output of the following code?
#include <stdio.h>
int main()
{
    int a = 15%4;
    printf("%d",a);
}
   A) 1
   B) 2
   C) 3  ✅
   D) 4

Explanation: % (Modular operator) এর সাহায্যে আমরা দুটি সংখ্যার ভাগশেষ বের করতে পারি। এক্ষেত্রে ১৫ কে ৪ দিয়ে ভাগ করলে ভাগশেষ আসে ৩।

2. What will be the output of the following code?
#include <stdio.h>
int main()
{
    double a = 15/4;
    printf("%lf",a);
}
   A) 3
   B) 3.000000  ✅
   C) 3.750000
   D) 4

Explanation: Module 2.1 - Arithmetic Operators এ আমরা দেখেছি ,
যদি আমরা দুটি integer নাম্বার  কে ভাগ করি  সেক্ষেত্রে সংখ্যা দুটির ভাগফল যদি পূর্ণ সংখ্যা না হয় তবে , দশমিকের পরের অংশ বাদ পড়ে যায়। এর কারণ হলো , দুটি integer নাম্বার কে ভাগ করলে কম্পাইলার ভাগফল টিকেও integer নাম্বার হিসেবে ডিল করে। যার কারণে ভাগফল টি integer নাম্বারে রাউন্ড হয়ে যায়।

3. 20 > 10 && 10 < 20, Is it true or false?
   A) True  ✅
   B) False

Explanation:   এখানে condition দুটির মাঝখানে And operator ব্যবহার  করা হয়েছে। অর্থাৎ উক্ত দুটি কন্ডিশন True হলে overall বিষয়টি True হবে । যেহেতু উক্ত দুটি condition ই True , তাই এর উত্তর হবে True.

4. What will be the output of the following code?
#include <stdio.h>
int main()
{
    int a = 6;

    if(a>5){
        printf("hi");
    }
    else if(a>3){
        printf("bye");
    }
}


   A) bye
   B) hi  ✅

Explanation:  এটি একটি if else ladder. এখানে সিরিয়ালি একটির পর একটি কন্ডিশন চেক হবে এবং যেকোনো একটি কন্ডিশন True হলে ঐ ব্লক টি execution এর মাধ্যমে ladder এর কাজ শেষ হবে। এক্ষেত্রে প্রথম কন্ডিশন টি True হয়েছে এবং hi প্রিন্ট হয়েছে এবং ladder বাকি অংশটূকু আর প্রিন্ট হয় নি।

5. What will be the output of the following code?
#include <stdio.h>

int main() {
    int num = 5;

    if (num > 0) {
        if (num < 10){
            printf("Small positive number\n");
         }
    }

    return 0;
}

   A) Error in code as there’s no else statement
   B) No output
   C) Small positive number  ✅

Explanation:   এটি nested if else এর একটি example. এখানে প্রথম কন্ডিশন টি True হয়েছে এবং সেই ব্লকের statement গুলো execution হবে। সেই ব্লকের  মধ্যে রয়েছে আরো একটি if ব্লক। if condition টি True , যার কারণে এর ভিতরের statement গুলো execution হবে।


6. What will be the output of the following code?
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if(x>=y || x<=y)
    {
        printf("hi");
    }
    else
    {
        printf("hello");
    }
}

   A) hi  ✅
   B) hello
   C) None of the above.
   D) All of the above.

Explanation:   এখানে condition দুটির মাঝখানে OR operator ব্যবহার  করা হয়েছে। অর্থাৎ উক্ত দুটি কন্ডিশন এর যেকোন একটি True হলে overall বিষয়টি True হবে । যেহেতু উক্ত দুটি condition এর মধ্যে দ্বিতীয় কন্ডিশন (x<=y) টি  True , তাই এর উত্তর হবে True.




7. What will be the output of the following code?
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 12;
    if(x>=y || x<=y)
    {
        printf("hi ");
    }

    printf("hello");
}


   A) hi hello  ✅
   B) hello hi
   C) hihello
   D) hello

Explanation: এখানে condition দুটির মাঝখানে OR operator ব্যবহার  করা হয়েছে। অর্থাৎ উক্ত দুটি কন্ডিশন এর যেকোন একটি True হলে overall বিষয়টি True হবে । যেহেতু উক্ত দুটি condition এর মধ্যে দ্বিতীয় কন্ডিশন ( x<=y) টি  True , তাই এর উত্তর হবে True. এবং পরবর্তীতে if conditon শেষে একটি print স্টেট্মেন্ট execution হয়েছে।


8. Which of the following is not a logical or relational operator?
   A) !=
   B) ==
   C) ||
   D) +  ✅

Explanation: উক্ত operator টি একটি Arithmetic Operator.

9. What will be the output of the following C code?
 #include <stdio.h>
    int main()
    {
        int x = 5;
        if (x < 10) {
            printf("hello ");
        }
        if (x == 5) {
            printf("hi");
        }
        else {
            printf("no");
        }
    }

    A) hello
    B) hi
    C) hello hi  ✅
    D) hello no

Explanation: এখানে if else স্টেটমেন্ট গুলো বেসিক if else স্টেটমেন্ট.  প্রথম if statement টি True হয়েছে এবং এর ভিতরের কোডটি execute হয়েছে। এরপর পরের if statement টি True হয়েছে যার কারণে এর ভিতরের কোড গুলো execute হয়েছে।



10. Why do we need relational operators?
    A) To add two numbers.
    B) To compare values and perform logical operations on them.  ✅
    C) To get the remainder of two numbers.
    D) To check if both of the conditions are true.



Explanation: দুই বা ততোধিক conditionals চেক করতে আমরা relational operator ব্যবহার করে থাকি।
```

# Extra Practice Problem of Module - 2

1. Take a number from user and check if its a even number or odd number.

```c
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is an even number.\n", num);
    }
    else{
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
```

2. Take a number from user and check if its a positive or negative number.

```c
#include<stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
```

3. Explain if else ladder.

-   The if-else ladder in C is a series of if, else if, and else statements used to check multiple conditions one after another. As soon as one condition is true, its block executes and the rest are skipped. It’s useful for making multi-way decisions in a program.
