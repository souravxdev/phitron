#include<iostream>
using namespace std;

int main(){
    int x;
    char c;
    double d;
    
    cin >>  x >> c >> d;
    cout << x << " " << c << endl;
    cout << d << endl;

    char character = 'a';
    int y = 65;
    int ascii = character;
    cout << ascii << endl; // printing ascii value of character without format specifier

    cout << (int)character << endl; // type casting, char character is type casted to integer
    cout << (char)y << endl; // type casting, int y is type casted to char
    return 0;
}