/*
    Check if a string entered is a palindrome or not. 
    (A palindrome is a string which is the same as the original when reversed)
*/

#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string, int);

int main()
{
    string str;
    int l;

    cout<< "Enter string: ";
    cin>> str;

    l = str.length();
    isPalindrome(str, l);
    
    return 0;
}

void isPalindrome(string str, int l)
{
    for(int i=0; i<(l)/2; i++)
    {
        if(str[i] != str[l-i-1])
            {
                cout<<"It's not a Palindrome.";
                return;
            }
    }

    cout<< "It's a Palindrome.";
}