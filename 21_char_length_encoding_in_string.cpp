/*
    Example---------
    Input:  str = abbbcdddd
    Output: a1b3c1d4
*/

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {

    // string str = "hnwnkuewhsqmgbbuqcljjiqcac";
    string str = "abbbcddddxyz";
	cout<<encode(str)<<endl;

	return 0;
}

string encode(string src)
{     
    string res;
    int i=0, j=1;

    do{    
        res += (src[i]);

        while(src[i] == src[i+1])
        {
            i++;
            j++;
        }  

        res += to_string(j);
        j = 1;
        i++;

    } while(i < src.length());

    return res;
}     
 
