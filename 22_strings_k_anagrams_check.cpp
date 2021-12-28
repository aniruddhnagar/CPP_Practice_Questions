/*
    Input: str1 = "fodr", str2="gork" , k = 2
    Output: 1
    Explanation: Can change fd to gk
*/

#include<bits/stdc++.h>
using namespace std;

bool areKAnagrams(string str1, string str2, int k)
{
    int m = str1.length();
    int n = str2.length();
    if(m != n) return false;

    int count=0;
    int flag[n]={0};
    
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if((flag[j]== 0) && (str1[i]==str2[j]))
            {   
                cout<< str1[i]<< " "<<str2[j] << " ";
                flag[j]=1;
                count++;
                cout<< count <<endl;
                break;
            }
        }
    }   
    return (m-count <= k) ? true : false;
}


int main()
{
    string str1 = "uovwhqfaemqodyksjj";
    string str2 = "swwhzsiowocjfyadvj";
    int k = 18;

    // string str1 = "ukdbgygrsjlaukwsgc";
    // string str2 = "memdwhetaewfahkc"; 
    // int k = 14;


    if(areKAnagrams(str1, str2, k) == true)
        cout<< endl <<"1\n";
    else
        cout<< endl <<"0\n";
}