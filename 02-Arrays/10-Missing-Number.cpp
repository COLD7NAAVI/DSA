/*
------------------------------------------------------------
Program : Missing Number
File    : 10-Missing-Number.cpp
Concept : Arrays, Mathematics, Sum Formula

Algorithm:
1. Read n, representing numbers from 1 to n.
2. Create an array of size n - 1.
3. Input the n - 1 elements.
4. Calculate the expected sum using:

       n * (n + 1) / 2

5. Calculate the actual sum of all array elements.
6. Subtract the actual sum from the expected sum.
7. Print the missing number.

Time Complexity  : O(n)
Space Complexity : O(n)
------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid array size !"<<endl;
        return 0;
    }
    int arr[n-1];
    for(int i = 0; i < n-1; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    
    int expected_sum;
    expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    for(int i = 0; i < n-1; i++){
        actual_sum = actual_sum + arr[i];
    }
    int missing_num;
    missing_num = expected_sum - actual_sum;
    cout << "Missing number in array is : "<< missing_num<<endl;
   return 0;
}