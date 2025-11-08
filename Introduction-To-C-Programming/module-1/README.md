# Module - 1
### Basic Syntax, Variables and Data Types

`Module Overview`
- What is Programming? 
    - Computer কে code এর মাধ্যমে instruction দিয়ে কোন কাজ করানো।
- Why do we need to learn Programming?
    - Computer অনেক fast। Computer কে দিয়ে অনেক দ্রুত কাজ করানোর জন্য programming শিখতে হয়।
    - Computer can do 10^7 to 10^8 operations per second.
- What is a Programming Language?
    - Computer কে যে language এ instruction দেয়া হয় তাই হচ্ছে Programming Language। 
- Which Programming Language should I start with as a begginer?
    - C
- Why choose C?
    - C is a Structured Programming Language.
    - C is a sychronus programming language, it executes it's code line by line.
    - C is the mother of all Programming Language.
    - All other programming languages are build on the fundamentals of C.
    - Based on fundamental concepts of C, all programming languages are built.
    - As a begginer we should not use tools, build in libraries or functions to learn programming.
- Python is developed using C++.
- C++ is the update version of C.

`Introduction`
- VS Code, Code Blocks, Online C compiler

`Basic Structure of a C Programming`
- C Programming structure can be compared with a human body; head and body.
- In human, head controls body and operate signal in the whole body, just like that, in C programming header(head) files controls the main(body) function.
- What is header file?
    - Pre-written codes
    - Reduce repetitive code and consumption of time
    - Helps to write complicated code

`First C Program`
```c
#include <stdio.h>

int main(){
    printf("Hello World");
    return 0;
}
```
- This is a simple C program that prints "Hello World" to the console.
- `printf` is a function, written in header file `stdio.h`.
- `printf` function means, something within the function, will display in the terminal.
- `.h` is the extention of the header file.
- Header file is written withing angular brackets.
- stdio: standard input and output.
- Header file is like a brain which tells/send signal to main function to do certain tasks.
- Function is something which do some operations.
- Any C program starts it's execution with `main()` function.
- We have to call a function using ().
- int main() - Here `int` is the return type of the `main` function.
- Everything we want to do in a function, have to write withing the parantheses.
- What we want to display using printf() function, we have to put them within " ".
- We have to end each `statement` with semicolon(;).
- `return 0`, it means the code is correct. When compiler sees return 0, it understand that code is succesfully run.
- <>, angular brackets
- (), paranteses
- {}, curly braces
- [], square brackets

`Printing in C`
- escape sequence
- \n : new line
- \t : tab, 4 spaces

`Variable and Data Type in C`
- What is Variable?
    - Variable: Container, to store data
- Why we need Data Type?
    - To know and inform computer, what type of data we are storing in memory.
- Data Types:
    - 1. Integer Number - int
    - 2. Fraction, Rational Number - float
    - 3. Character - char
    - 4. Boolean - bool

`Variable in C`
- Variable declaring syntax: data_type variable_name;
- variable_name will occupy some space in memory where it can store data_type typed data.
- Variable declaration and initialization syntax: data_type variable_name = value;
- Value of variable can be changed, vaiable means the value will vary.

- 0 = 1 bit
- 1 = 1 bit
- 1 byte = 8 bit 

- int : 4 byte : 32 bit : 2^32 or 10^9 সংখ্যক value can be hold in int data type
- float : 4 byte : 32 bit
- char : 1 byte

- Character variable must be kept withing single('') quotation.
- Must contain the character value in a single quotation : `char c = '@'`

`Printing variables`
- Format Specifier
- আমরা যদি কোন variable এর value print করতে চাই, তাহলে আমাদের format specifier এর মাধ্যমে print করতে হবে।
- int : %d
- long long int : %lld
- float : %f
- double : %lf
- char : %c
- string : %s

- float by default দশমিকের পরে ৬ ঘর পর্যন্ত print করে।
- We can control the digits we want to print for floating numbers after point: `%.2f`

`Boolean in C`
- stdbool.h : standard boolean
- Boolean data type এর কোন format specifier নেই।
- Boolean data হয় true অথবা false হবে।
- Boolean value কে integer হিসেবেই print করা হয়।
- True = 1, False = 0

`Why we need to take input`
- User এর প্রয়োজন মতো input নেয়ার জন্য।

`How to take input in C`
- User এর value নিয়ে কাজ করতে হলে আমাদের input নিতে হবে।
- আমরা যদি কোন variable এর value scan করতে(input নিতে) চাই, তাহলে আমাদের format specifier এর মাধ্যমে scan করতে হবে।
- scanf() function(written in stdio.h header file) ব্যাবহার করে user থেকে input নেয়া হয়।
- scanf() function ব্যাবহার করে, variable এর মধ্যে যে garbage value আছে সেই value তাকে cahnge/replace করা হয়।
- & : address of a variable, reference sign, only used in scanf().
- Variable declare করার পর তার মধ্যে কোন value assign না করলেও, variable টার মধ্যে garbage value থেকে যায়।

`Limitations of data types in C`
- কোন type এর data নিয়ে কাজ করছি তার পাশাপাশি, কোন size এর data নিয়ে কাজ করছি সেটাও মাথায় রাখতে হবে।
- long long int : 8 byte : 64 bit : 2^64 : 10^18 sized value : %lld
- double : 8 byte : : 64 bit : 2^64 : 10^18 sized value : %lf

`Rules of naming Variables`
- start with a letter or _
- can not start with numbers
- must contain letter, digits or _
- reserved keywords can not be used

# Quiz of Module - 1

1. What is stdio.h called?
- Header file

2. Which of the following is an integer value?
- 3145

3. A char variable can store ____ bits?
- 8

4. Which of the following function is used for taking input in C language?
- scanf()

5. What is the format specifier for double variable?
- %lf

6. Which of the following function is used for printing output in C language?
- printf()

7. A double variable can store ___ bytes?
- 8

8. Each statement in a C program should end with?
- Semicolon(;)

9. 1 kilobyte = ?
- 1024 byte

10. What is the output of the following code?
```c
#include <stdio.h>

int main(){
    int num = 100;
    printf("Number is = %d", num);
    return 0;
}
```
- Number is = 100


# Quiz Explanation of Module - 1
```c

1. What is stdio.h called?
   A) initializing file
   B) Nothing
   C) I don’t know
   D) Header file ✅ 
Explanation: stdio.h একটি হেডার ফাইল যা C প্রোগ্রামিং-এ ব্যবহার করা হয়। এটি ইনপুট/ আউটপুট ফাংশন (যেমন printf, scanf) ডিক্লেয়ার করে।

2. Which of the following is an integer value?
   A) 3.145
   B) 3145 ✅ 
   C) ‘3’
   D) All of the above.
Explanation: একটি ইন্টিজার (integer) হলো পূর্ণ সংখ্যা, যেমন 1, 112, 1212, 3145 ইত্যাদি। কিন্তু, 3.145 হচ্ছে দশমিক সংখ্যা (float) এবং '3' হচ্ছে ক্যারেক্টার (char)।

3. A char variable can store ____ bits?
   A) 1
   B) 4
   C) 8 ✅ 
   D) 2
Explanation: একটি char ভেরিয়েবল সাধারণত 8 বিট (1 বাইট) ডাটা সংরক্ষণ করে, যা ক্যারেক্টার (যেমন 'A', '1', '@') রাখার জন্য যথেষ্ট।
 
4. Which of the following function is used for taking input in C language?
   A) scan()
   B) print()
   C) scanf() ✅ 
   D) printf()
Explanation: C ভাষায় ইউজার ইনপুট নেওয়ার জন্য scanf() ফাংশন ব্যবহৃত হয়।

5. What is the format specifier for double variable?
   A) %d
   B) %f
   C) %lf ✅ 
   D) %lld
Explanation: C প্রোগ্রামিং-এ double টাইপের ভেরিয়েবলের জন্য %lf ফরম্যাট স্পেসিফায়ার ব্যবহার করা হয়। %f ফ্লোট, %d ইন্টিজার, %lld লং লং ইন্টিজারের জন্য ব্যবহৃত হয়।

6. Which of the following function is used for printing output in C language?
   A) scan()
   B) print()
   C) scanf()
   D) printf() ✅ 
Explanation: C ভাষায় আউটপুট প্রদর্শনের জন্য printf() ফাংশন ব্যবহৃত হয়।

7. A double variable can store ___ bytes?
   A) 4
   B) 32
   C) 8 ✅ 
   D) 64
Explanation: C প্রোগ্রামিং-এ double টাইপের ভেরিয়েবল সাধারণত ৮ বাইট (64 বিট) মেমরি ব্যবহার করে, যা দশমিক সংখ্যা সংরক্ষণ করে।
  
8. Each statement in a C program should end with?
   A) colon (:)
   B) Semicolon (;) ✅ 
   C) Dot(.)
   D) None of the above.
Explanation: C প্রোগ্রামিং-এ প্রতিটি স্টেটমেন্ট (কমান্ড) শেষ করতে সেমিকোলন (;) ব্যবহার করা হয়। এটি কম্পাইলারকে বুঝায় যে স্টেটমেন্ট শেষ হয়েছে।

9. 1 kilobyte = ?
    A) 1024 GB
    B) 1024 byte ✅ 
    C) 1024 bit.
    D) 1024 MB.
Explanation: ১ কিলোবাইট (KB) সমান ১০২৪ বাইট।

10. What is the output of the following code?
#include <stdio.h>
int main()
{
    int num = 100;
    printf("Number is = %d", num);
    return 0;
}

A) Number is = num
B) Number is = 100 ✅ 
C) 100
D) Compilation Error
Explanation: printf("Number is = %d", num); → %d (ডেসিমাল ইন্টিজার ফরম্যাট স্পেসিফায়ার) ব্যবহার করে num-এর ভ্যালু প্রিন্ট করে। %d-এর জায়গায় num-এর ভ্যালু (১০০) বসে, তাই আউটপুট হবে: Number is = 100  
```


# Extra Practice Problem of Module - 1

1. Explain why we need long long int data type? 
- We use long long int in C to store very large integers that exceed the range of regular int. It typically holds 8 bytes of data, allowing values up to about 9 quintillion(about ±9×10¹⁸ range). Use the %lld format specifier when printing or scanning long long int values.

2. Write all the rules for naming a variable in C programming.
    1. Must start with a letter or underscore.
    2. Can contain only letters, digits, and underscores.
    3. Case sensitive.
    4. No spaces allowed.
    5. Cannot use reserved keywords.
    6. Should be meaningful.
    7. Maximum length recognized is at least 31 characters.

3. Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.  
```c
#include<stdio.h>

int main(){
    int fNum;
    int sNum;
    printf("Enter the first number: ");
    scanf("%d", &fNum);
    printf("Enter the second number: ");
    scanf("%d", &sNum);

    printf("Printing the second number: %d\n", sNum);
    printf("Printing the first number: %d\n", fNum);
}
```