/*
Problem: Maximum Consecutive Ones

Given a binary array, find the maximum number of consecutive 1s.

Approach:
- Traverse the array once.
- Maintain `count` for the current consecutive 1s.
- Reset `count` when 0 is encountered.
- Maintain `maxCount` for the maximum streak found.

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid array size!"<<endl;
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<<i<<": ";
        cin >> arr[i];
    }
    int count = 0;
    int maxCount = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    cout << "Maximum Consecutive Ones in array is : "<< maxCount<<endl;
   return 0;
}