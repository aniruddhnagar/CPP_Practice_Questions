/*
    Demonstrating the use of new & delete key in cpp.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int(10); //initialize value 10 altogether
    int *ptr1 = new int[5]; //declare an array of integers on heap

    cout << *ptr << endl;

    for(int i = 0; i < 5; ++i)
    {
        ptr1[i] = i + 1;
    }

    for(int i = 0; i < 5; ++i)
    {
        cout << ptr1[i] << ",";
    }

    delete ptr; //de-allocate pointer
    delete[] ptr1; //de-allocate pointer to an array

    ptr = NULL; // Its a good practice to set freed pointer to NULL.
    ptr1 = NULL; 

    return 0;
}