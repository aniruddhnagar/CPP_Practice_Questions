/*
    Count the number of digits of a number.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int x=0;
    int n_digit=0;

    cout<<"Enter the number: ";
    cin>> x;

    do{
        n_digit++;
        x = x/10;
    }
    while(x);

    cout<<n_digit;
    return 0;
}