#include <bits/stdc++.h>
using namespace std;

int main()
{

    // This pointer will hold the
    // base address of the block created
    int *ptr = NULL, *ptr1 = NULL, *ptr2 = NULL;
    int n, i, sum = 0;

    // Get the number of elements for the array
    n = 5;
    cout << endl<< "Enter number of elements: " << n << endl << endl;

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Dynamically allocate memory using calloc()
    ptr1 = (int*)calloc(n, sizeof(int));

    // Dynamically allocate memory using calloc()
    ptr2 = (int*)calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL || ptr1 == NULL || ptr2 == NULL) {
        cout << "Memory not allocated" << endl;
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        cout << "Memory successfully allocated using malloc" << endl;

        // Free the memory
        free(ptr);
        cout << "Malloc Memory successfully freed" << endl;

        // Memory has been successfully allocated
        cout<< endl << "Memory successfully allocated using calloc1" << endl;

        // Free the memory
        free(ptr1);
        cout << "Calloc1 Memory successfully freed" << endl << endl;


        // Memory has been successfully allocated
        cout << "Memory successfully allocated using calloc2" << endl;

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr2[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: " << endl;
        for (i = 0; i < n; ++i) {
            cout << ptr2[i] << ", " ;
        }

        // Get the new size for the array
        n = 10;
        cout << endl << endl << "Enter the new size of the array: " << n << endl << endl;

        // Dynamically re-allocate memory using realloc()
        ptr2 = (int*)realloc(ptr2, n * sizeof(int));

        // Memory has been successfully allocated
        cout << "Memory successfully re-allocated using realloc" << endl;

        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            ptr2[i] = i + 1;
        }

        // Print the elements of the array
        cout << "The elements of the array are: ";
        for (i = 0; i < n; ++i) {
            cout << ptr2[i] << ", ";
        }

        free(ptr2);
    }

    return 0;
}