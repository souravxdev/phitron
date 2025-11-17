#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a, b) << endl;
    cout << max({3, 4, 5, 6, 7}) << endl;

    return 0;
}