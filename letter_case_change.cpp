/* 
   Change the case of the character entered. 
   (using operators only).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char in_char;

    cout<<"Enter charater: ";
    cin>>in_char;

    if(97<in_char && in_char<122)
        in_char = in_char + 'A'-'a';
        
    else if (65<in_char && in_char<90)
        in_char = in_char -'A' + 'a';

    cout<< in_char<<endl;
    return 0;

}