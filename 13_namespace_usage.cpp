/*
    Demonstrating use of 'namespace'
*/

//main.cpp
#include <bits/stdc++.h>
#include "13a_A.h"
#include "13b_B.h"
#include "13c_C.h"
using namespace std;

int main()
{
    //To resolve scope we use :: (scope-resolution operator)
    cout << Mul::compute(5,6) << endl;
    cout << Add::compute(5,3) << endl;

    //Usage:
    cout << Concate::String::add("Aniruddh ", "Nagar") << endl;
    cout << Concate::Integer::add(3, 7) << endl;
    
    return 0;
}