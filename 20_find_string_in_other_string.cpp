/*
    The function takes two strings as arguments (s,x) 
    and  locates the occurrence of the string x in the string s.
    The function returns an integer denoting the first occurrence 
    of the string x in s (0 based indexing).
*/

#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    string a = "Aniruddh Nagar"; //input string
    string b = "ddh";            //target string
    
    cout<<strstr(a,b)<<endl;
}


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int k = -1, i = 0, temp;
    while(i<s.length())
    {    
        temp = i;
        int j=0;
        while(j<x.length())
        {  
            if(s[temp] == x[j])
            {
                temp++;
                j++;
            }
            else
                break;
        }

        if(j==x.length())
        {
            k = i;
            break;             
        }
        i++;
    }
    return k;
}