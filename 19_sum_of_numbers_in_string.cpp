/* 
    C++ program to calculate sum of all numbers present
    in a string containing alphanumeric characters.

    Input: str = 1abc23    Output: 24
    
    Explanation: 1 and 23 are numbers in the string which is 
    added to get the sum as  24.
*/

#include <iostream>
using namespace std;


int findSum(string str)
{
    int i = 0, sum = 0, temp;
    
    for(int i=0; i< str.length(); ++i)
    {
        if(!(isdigit(str[i])))
        {
            sum += temp;
            temp = 0;    	        
        }
        else
            temp = (temp*10 + (str[i] - '0'));
    }
    sum += temp;
    return sum;
}


int main()
{
	// input alphanumeric string
    string str;
    cout<< endl <<"Enter alphanumeric string: ";
    cin>>str;
    cout << findSum(str);
    cout<<endl;

	return 0;
}
