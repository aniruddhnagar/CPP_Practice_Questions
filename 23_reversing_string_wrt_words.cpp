/*
    Given a String S, reverse the string without reversing its 
    individual words. Words are separated by dots.

    Input: S = i.like.this.program.very.much
    Output:    much.very.program.this.like.i
*/

#include <bits/stdc++.h>
using namespace std;

//Function to reverse words in a given string.
string reverseWords(string S) 
{ 
    string str = "";
    int l = S.length()-1;
    int i=0, j=0;

    while(l > -1)
    {
        j=l;
        while((l > -1) && (S[l] != '.')) l--;
        
        i = l+1;
        while(i<=j){

            str += S[i];
            i++; 
        }
        str += '.';
        l--;
    }

    str[str.length()-1] = '\0';
    return str;
} 

int main() 
{
    string s = "i.like.this.program.very.much";
    //string s = "this.is.me.Aniruddh.Nagar";
    cout<<endl << "Input:  ";
    cout<< s <<endl;
    cout<<endl << "Output: ";
    cout<< reverseWords(s) << endl << endl;
    return 0;
} 