/*
    Print a 2-D matrix, given the pointer to the 1st element 
    and the matrix dimensions.
*/

#include <bits/stdc++.h>
using namespace std;

void print_matrix(int* p, int m, int n)
{
    for(int i=0; i<m; i++)
    {   
        cout << endl << endl;
        for(int j=0; j<n; j++)
        {
            cout << *(p + n * i + j) << " ";
        }
    }
    cout << endl << endl;
}

int main()
{
    int a[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    print_matrix((int*)a, 3, 4);
        
    return 0;
}