/*
    Write a function that can take the sum of any number of integers passed:
*/

#include <bits/stdc++.h>
using namespace std;

int sum(int n, ...)
{
    int result=0;
    va_list args;

    va_start(args, n);
    
    for(int i=0; i<n; i++)
        result += va_arg(args, int);
    
    va_end(args);

    return result;
}

int main()
{
    int res;

    res = sum(4, 3, 4, 5, 6);

    cout << res;

    return 0;
}

/*
    Some of the important syntax and keywords used in the code:

        Usage of ... in function argument: This spread operator is the indication of 
                     declaring the function as accepting variable arguments.

        va_list: Stores the list of variable arguments recieved.
        va_arg: Retrieves the next value in the va_list with the type passed as the parameter.
        va_end: Clean up the argument list.
*/