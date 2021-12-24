/*
    Write an example to demonstrate Function pointer.
*/

#include <bits/stdc++.h>
using namespace std;

int add(int x, int y) 
{ 
    return x + y; 
}

string add(string x, string y)
{ 
    return x + y; 
}

int main()
{
    //Assign integer add() function to funtion pointer
    int (*fun_ptr_int)(int, int) = add;
    
    //Assign string add() function to function pointer
    string (*fun_ptr_str)(string, string) = add;
    
    //Calling using function pointer
    cout << fun_ptr_int(8, 8) << endl;
    
    cout << fun_ptr_str("Aniruddh ", "Nagar") << endl;
    
    return 0;
}