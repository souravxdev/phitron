// Take a number as input and check if it is an even number or odd. (Do this 4 times with 4 types of functions)

// 1. With return and parameter 
// #include<stdio.h>

// int evenOddChecking(int num){
//     if(num % 2 == 0){
//         printf("Even\n");
//     }
//     else{
//         printf("Odd\n");
//     }
// }

// int main(){
//     int num;
//     scanf("%d", &num);
//     evenOddChecking(num);
//     return 0;
// }

// 2. Without return but with parameter
// #include<stdio.h>
// void evenOddChecking(int num){
//     if(num % 2 == 0){
//         printf("Even\n");
//     }
//     else{
//         printf("Odd\n");
//     }
// }
// int main(){
//     int num;
//     scanf("%d", &num);
//     evenOddChecking(num);
//     return 0;
// }

// 3. With return but without parameter
// #include<stdio.h>
// int evenOddChecking(){
//     int num;
//     scanf("%d", &num);
//     if(num % 2 == 0){
//         return 1; // Even
//     }
//     else{
//         return 0; // Odd
//     }
// }
// int main(){
//     int result = evenOddChecking();
//     if(result == 1){
//         printf("Even\n");
//     }
//     else{
//         printf("Odd\n");
//     }
//     return 0;
// }

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