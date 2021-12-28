/* 
    Function to find largest and second largest element.
    sizeOfArray : number of elements in the array
    arr = input array
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
{
    int max = -1, max2= -1;
    vector<int> v;

    for(int i=0; i< (sizeOfArray); ++i)
    {
        if(arr[i] > max)  max = arr[i];
    }

    for(int i=0; i< (sizeOfArray); ++i)
    {
        if((arr[i] < max) && (arr[i] > max2))  max2 = arr[i];
    }

    v.push_back(max);
    v.push_back(max2);
    
    return v;
}



int main() {
	
	    int sizeOfArray;
        cout<<endl << "Enter size of Array: ";
	    cin >> sizeOfArray;   
	    int arr[sizeOfArray];
	    
	    // Array input
        cout<<endl << "Enter elements of Array: "<<endl;
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }

	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<endl << " Max1: "<< ans[0]<<" / "<<" Max2: "<< ans[1]<<endl;

	
	return 0;
} 