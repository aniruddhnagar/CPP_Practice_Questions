/*
    Convert decimal number input by the user to binary.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string str;

    cout << "Enter the number: ";
    cin >> x;

    while(x)
    {
        str += (char)((x & 1 ) + '0');
        x >>= 1;
    };

    reverse(str.begin(), str.end());

    cout << "Binary equivalent is: " << str;

    return 0;
}

/*
    The expression (x & 1) finds out whether the remainder when it is divisible by 2. 
    If yes, the remainder is 0, otherwise 1. We append this value after adding ASCII '0' 
    to the binary string and typecasting to char. At each step, we further divide 
    x by 2 by right-shift-1. Finally, we reverse the binary string to get the desired result.
*/