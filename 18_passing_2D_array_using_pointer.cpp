/*
    Given a 2D array A[ ][ ] of size N x N consisting of integers. 
    The task is to print all the elements in matrix 
    (row and column order) form.
*/

#include <iostream>
using namespace std;

// Function to take input for 2D array elements
void twoDimensional(int** mat,int N)
{  
    cout << endl;

    for(int i = 0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            cout<< mat[i][j] <<" ";
        }
        cout << endl<< endl;
    }   
}

int main() 
{
    int N=3;
    int demo[][N] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Declaring mat as pointer to pointer
    int **mat;

    // mat pointer contains array of pointer to array
    mat = new int*[N];
    
    // Taking input in mat[][] from demo[][]
    for(int i = 0;i<N;i++){
        mat[i] = new int[N];
    }
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            mat[i][j] = demo[i][j];
        }
    }
    
    twoDimensional(mat, N);   
	
	return 0;
}  