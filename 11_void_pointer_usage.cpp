/*
    Demonstrating usage of void pointer.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    float f = 6.5;
    string s = "Aniruddh Nagar";
    
    void *p;
    
    p = &x;  //valid

    /* 
    cout << *p << endl;
        the above line doesn't compile becoz
        We are trying to de-reference a void pointer without casting.
    */

    //typecasting void pointer to int pointer
    cout << *( static_cast<int*> (p) ) << endl; 

    p = &f;  //valid
    //typecasting void pointer to float pointer
    cout << *( static_cast<float*> (p) ) << endl; 

    p = &s;  //valid
    //typecasting void pointer to string pointer
    cout << *( static_cast<string*> (p) ) << endl; 

    return 0;
}
