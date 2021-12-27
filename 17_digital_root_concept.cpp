/*
You are given a number n. 
You need to find the digital root of n. 
DigitalRoot of a number is the recursive sum of its digits 
until we get a single digit number.

Example:
Input:
n = 99999
Output: 9
Explanation: Sum of digits of 99999 is 45
which is not a single digit number, hence
sum of digit of 45 is 9 which is a single
digit number.
*/

#include <bits/stdc++.h>
using namespace std;

// int sumDigits(int);
int digitalRoot(int);

int main() {

    int n;
    cout<< endl <<"Enter number: ";
    cin>> n;
    
    cout<< digitalRoot(n);

	return 0;
}

// // function to calculate digit sum of a number
// int sumDigits(int n)
// {
//     // returning n if n / 10 is 0
//     if(n / 10 == 0)
//         return n;
//     // else adding digit sum
//     else
//         return n % 10 + sumDigits(n/10);
// }


// // function to calculate the single digit answer
// int digitalRoot(int n)
// {
//     // if n is less than n then 
//     // returning the n
//     if(n / 10 == 0)
//         return n;
//     // else calling sumDigits function
//     else
//         return digitalRoot(sumDigits(n));   
// }

// function to calculate the single digit answer
int digitalRoot(int n)
{
    while(n > 9)
    {
        int sum=0;
        while( n != 0)
        {
            sum += (n%10);
            n = n/10;           
        }
        // cout<<endl<< sum <<endl;
        n = sum;
    }
    return n;    
}