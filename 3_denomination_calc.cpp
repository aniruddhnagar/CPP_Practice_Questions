/*
    Take user input amount of money and consider 
    an infinite supply of denominations 1, 20, 50 and 100. 
    What is the minimum number of denominations to make 
    the change?
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amt=0;
    int t=0;
    int q;

    cout<<"Enter amount: ";
    cin>>amt;

    q = amt/100;
    t += q;
    amt -= q*100;

    q = amt/50;
    t += q;
    amt -= q*50;

    q = amt/20;
    t += q;
    amt -= q*20;

    q = amt/10;
    t += q;
    amt -= q*10;

    t += amt;

    cout <<t;

    return 0;
}
