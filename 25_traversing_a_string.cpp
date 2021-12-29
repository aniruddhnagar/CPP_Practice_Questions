/*
    Traversing a string using following 3 ways:
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ruddh";
    cout << endl;

    for(int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
  
    for(char x: str)
        cout << x;
    cout << endl;
    
    for(auto it = str.begin(); it != str.end(); it++)
        cout << (*it);
    cout << endl;

    return 0;
}