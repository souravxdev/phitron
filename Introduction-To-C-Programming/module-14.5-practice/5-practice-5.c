// Question: Make a function named capital_to_small() which will take a capital alphabet as a parameter (which is a character) and it will convert that capital alphabet to small alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be capital alphabets and call that function to get the small alphabet and print that in the main function.

// Bonus: You can also try this with 4 different types of function use cases.

#include<stdio.h>
// Function prototype
char capital_to_small(char ch);

int main(){

    char upper_char;
    // Taking capital alphabet input from user
    scanf("%c", &upper_char);
    
    // Calling the function and storing the returned small character
    char small_char = capital_to_small(upper_char);
    
    // Printing the small character
    printf("The small alphabet of '%c' is: %c\n", upper_char, small_char);
                    
    return 0;
}
// Function definition
char capital_to_small(char ch) {
    return ch + ('a' - 'A'); // Converting capital alphabet to small alphabet
}