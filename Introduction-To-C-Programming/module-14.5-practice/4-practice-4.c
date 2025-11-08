// Question: Make a function named small_to_capital() which will take a small alphabet as a parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through that function. So, the return type will be char. Now in the main function take a character input which will be small alphabets and call that function to get the capital alphabet and print that in the main function.

// Bonus: You can also try this with 4 different types of function use cases.
#include <stdio.h>
// Function prototype
char small_to_capital(char ch);     
int main() {

    char lower_char;
    // Taking small alphabet input from user
    scanf("%c", &lower_char);
    
    // Calling the function and storing the returned capital character
    char capital_char = small_to_capital(lower_char);
    
    // Printing the capital character
    printf("The capital alphabet of '%c' is: %c\n", lower_char, capital_char);
                    
    return 0;
}
// Function definition
char small_to_capital(char ch) {
    return ch - ('a' - 'A'); // Converting small alphabet to capital alphabet
}