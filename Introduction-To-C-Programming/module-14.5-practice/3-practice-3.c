// Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character to ascii value and return through that function. So, the return type will be int. Now in the main function take a character input and call that function to get the integer value of it and print that in the main function.

// Bonus: You can also try this with 4 different types of function use cases.


#include <stdio.h>
// Function prototype
int char_to_ascii(char ch);
int main() {
    char input_char;
    // Taking character input from user
    scanf("%c", &input_char);
    
    // Calling the function and storing the returned ascii value
    int ascii_value = char_to_ascii(input_char);
    
    // Printing the ascii value
    printf("The ASCII value of '%c' is: %d\n", input_char, ascii_value);
    
    return 0;
}
// Function definition
int char_to_ascii(char ch) {
    return (int)ch; // Converting character to its ASCII value
}