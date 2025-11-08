# Module - 14
### Function

`Module Overview`
- Essential Functions in C Programming
    - From basic function types to scope rules, we'll explore the building blocks of efficient C programming and demystify essential concepts for beginners.
---
- What are Functions?
    - Reusable Code Blocks
        - Self-contained units that perform specific tasks
    - Benefits
        - Improves readability
        - Reduces duplication
        - Easier maintenance
    - Structure
        - Return type
        - Name
        - Parameters
        - Body with statements
---
- 4 Types of Function
    - With Parameters, With return
        - Takes input, gives output. Example: int sum(int a, int b)
    - With Parameters, No Return
        - Takes input, no output. Example: void print_value(int x)
    - No Parameters, No Return
        - No input, no output. Example: void display_menu()
    - No Parameters, With Return
        - No input, gives output. Example: int get_random()
---
- Variable Scope in C
    - Global Scope
        - Accessible throughout program
    - File Scope
        - Visible within single file
    - Function Scope
        - Limited to specific function
    - Block scope
        - Only within {} blocks
---
- Essential Math Functions
    - Calculation Functions
        - sqrt(), pow(), abs() - calculate roots, powers, absolute values
    - Trigonometric Functions
        - sin(), cos(), tan() - use radians not degrees
    - Random Number Generation
        - rand(), srand() - create pseudo-random sequences
    - Convension Functions
        - floor(), ceil(), round() - transform floating-point values
---
- Why int main() & return 0?
    - Entry Point
        - main() is where program execution begins
    - Return Type
        - int indicates status code returned to operating system
    - Return 0
        - Signals successful execution
    - Non-zero Returns
        - Indicate errors or specific exit conditions
--- 
- Function Best Practices
    - Keep Functions Focused
        - Each function should do exactly one thing
    - Limit Function Length
        - Aim for 20-30 lines maximum
    - Use Descriptive Names
        - calculateTotalPrice() is better than calc()
    - Document with Comments
        - Explain parameters, return values, and purpose
---


# Quiz of Module - 14

1. Which of the following is a correct format for declaration of function?
- return_type function_name (parameters);

2. What will be the output of the following C code?
```c
#include<stdio.h>

void m(){
    printf("hi");
}

int main(){
    m();
    return 0;
}
```
- hi

3. What will be the output of the following C code?
```c
#include<stdio.h>

void m(){
    printf("hi ");
}

int main(){
    printf("hello ");
    return 0;
}
```
- hello

4. What should be the return type of sum function??
```c
#include<stdio.h>

---- sum(){
    int a = 10, b = 10;
    printf("%d\n", a + b);
}

int main(){
    sum();
    return 0;
}
```
- void

5. What should be the output of the following C code?
```c
#include<stdio.h>
int sum(int x, int y){
    int res = x + y;
    return res;
}

int main(){

    sum(5, 6);
    return 0;
}
```
- Nothing

6. What should be the output of the following C code?
```c
#include<stdio.h>

int sum(int x, int y){
    int res = x + y;
    return res;
}

int main(){

    printf("%d", sum(5, 6));

    return 0;
}
```
- 11

7. What is the purpose of the parameters in a C function?
- To pass values to the function

8. What is the purpose of the return statement in a C function?
- To return a value to the caller of the function

9. What will be the result of ceil(4.5)?
- 5

10. What will be the result of floor(4.5)?
- 4 


# Quiz Explanation of Module - 14
```c
1. Which of the following is a correct format for declaration of function?
a) return-type function-name (parameters); ✅ 
b) function-name (parameter name) return-type;
c) return-type (parameter type) function-name;
d) all of the mentioned
Explanation: ফাংশন ডিক্লেয়ার করার সঠিক ফরম্যাট হলো: return-type function-name(parameters);
return-type: ফাংশন যা রিটার্ন করবে তার ডাটা টাইপ (যেমন: int, void)
function-name: ফাংশনের নাম
parameters: ফাংশনের ইনপুট ভেরিয়েবল (অপশনাল )


2. What will be the output of the following C code?
#include <stdio.h>
void m()
{
    printf("hi");
}
int main()
{
    m();
    return 0;
}

a) hi ✅ 
b) Run time error
c) hello
d) None of the above
Explanation: main() ফাংশন থেকে m() ফাংশন কল করবে, যা "hi" প্রিন্ট করে।


3. What will be the output of the following C code?
#include <stdio.h>
void m()
{
    printf("hi ");
}
int main()
{
    printf("hello ");
    return 0;
}
    
a) hi
b) hello ✅ 
c) hi hello
d) hello hi
Explanation: প্রোগ্রামটি শুধুমাত্র main() ফাংশনের ভিতরের কোড printf("hello "); এক্সিকিউট করবে। কারণ, m() ফাংশন ডিফাইন করা থাকলেও, এটি কল করা হয় নি তাই এর ভিতরের কোড (printf("hi ");) রান হবে না।


4. What should be the return type of sum function? Think deeply     
#include <stdio.h>
___ sum()
{
    int a = 10, b = 10;
    printf("%d", a + b);
}
int main()
{
    sum();
    return 0;
}

a) int
b) float
c) void ✅ 
d) None of the above
Explanation: sum() ফাংশনটি a + b এর মান প্রিন্ট করছে, কিন্তু কোনো মান রিটার্ন করছে না। যেহেতু ফাংশনটি কোনো মান রিটার্ন করছে না, এর রিটার্ন টাইপ void হবে।


5. What will be the output of the following C code?
#include <stdio.h>
int sum(int x, int y)
{
    int res = x + y;
    return res;
}
int main()
{
    sum(5, 6);
    return 0;
}

a) 11
b) 30
c) -1
d) None of the above ✅
Explanation: প্রোগ্রামটি কোনো আউটপুট প্রদর্শন করবে না, কারণ: sum(5, 6) ফাংশনটি 11 রিটার্ন করলেও, এই মানটি কোথাও স্টোর বা প্রিন্ট করা হয়নি।


6. What will be the output of the following C code?
#include <stdio.h>
int sum(int x, int y)
{
    int res = x + y;
    return res;
}
int main()
{
    printf("%d", sum(5, 6));
    return 0;
}

a) 11 ✅
b) 30
c) -1
d) None of the above
Explanation: sum(5, 6) ফাংশনটি 5 ও 6 যোগ করে res ভেরিয়েবলে x + y (5+6=11) সংরক্ষিত হয় এবং এটি ফাংশন দ্বারা রিটার্ন হয়। printf("%d", sum(5, 6)); দ্বারা এই রিটার্ন ভ্যালু প্রিন্ট হয়।


7. What is the purpose of the parameters in a C function?

a) to specify the type of data that the function returns
b) to pass values to the function  ✅
c) to specify the functions name
d) to mark the end of the function
Explanation: প্যারামিটার ব্যবহার করা হয় ফাংশনে ডাটা/মান পাঠানোর জন্য। ফাংশন কল করার সময় প্যারামিটারের মাধ্যমে ভ্যালু পাঠানো হয়।


8. What is the purpose of the return statement in a C function?
a) to mark the start of the function
b) to specify the type of data that the function returns
c) to return a value to the caller of the function  ✅
d) to specify the functions name
Explanation: return স্টেটমেন্টের কাজ হলো ফাংশন থেকে কলার ফাংশনে কোনো ভ্যালু ফেরত দেওয়া। return ফাংশনের এক্সিকিউশন শেষ করে এবং নির্দিষ্ট ভ্যালু রিটার্ন করে।


9. What will be the result of ceil(4.5)? Suppose all the header files are written
a) 4
b) 5 ✅
c) 4.5
d) 6
Explanation: ceil() ফাংশনটি সিলিং মান রিটার্ন করে, অর্থাৎ দশমিক সংখ্যাকে তার থেকে বড় নিকটতম পূর্ণ সংখ্যায় রিটার্ন করে। ceil(4.5) এর ফলাফল 5 (কারণ 4.5 এর থেকে বড় নিকটতম পূর্ণসংখ্যা 5)।


10. What will be the result of floor(4.5)? Suppose all the header files are written
a) 5
b) 4 ✅
c) 4.5
d) 6
Explanation: floor() ফাংশনটি ফ্লোর মান রিটার্ন করে, অর্থাৎ দশমিক সংখ্যাকে তার থেকে ছোট নিকটতম পূর্ণ সংখ্যায় রিটার্ন করে। floor(4.5) এর ফলাফল 4 (কারণ 4.5 এর থেকে ছোট নিকটতম পূর্ণসংখ্যা 4)।
```


# Extra Practice Problem of Module - 14

1. Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)
```c
// 1. With return and parameter 
#include<stdio.h>

int evenOddChecking(int num){
    if(num % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}

int main(){
    int num;
    scanf("%d", &num);
    evenOddChecking(num);
    return 0;
}

// 2. Without return but with parameter
#include<stdio.h>
void evenOddChecking(int num){
    if(num % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int main(){
    int num;
    scanf("%d", &num);
    evenOddChecking(num);
    return 0;
}

// 3. With return but without parameter
#include<stdio.h>
int evenOddChecking(){
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        return 1; // Even
    }
    else{
        return 0; // Odd
    }
}
int main(){
    int result = evenOddChecking();
    if(result == 1){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}

// 4. Without return and without parameter
#include<stdio.h>
void evenOddChecking(){
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}
int main(){
    evenOddChecking();
    return 0;
}
```


2. Practice 6 types of math functions shown today.
 
```c
#include<stdio.h>
#include<math.h>

int main(){

    float a = 2.2;
    int b = ceil(a); // ceil function rounds up the value
    int c = floor(a); // floor function rounds down the value
    int d = round(a); // round function rounds to the nearest integer
    int s = sqrt(16); // sqrt function calculates the square root
    int p = pow(2, 3); // pow function calculates power
    int n = fabs(-10); // fabs function returns absolute value

    printf("Ceil: %d\n", b);
    printf("Floor: %d\n", c);
    printf("Round: %d\n", d);
    printf("Square Root: %d\n", s);
    printf("Power: %d\n", p);
    printf("Absolute: %d\n", n);

    return 0;
}
```