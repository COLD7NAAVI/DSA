/*
============================================================
Problem: Check if an Array is Sorted

Approach:
1. Traverse the array from left to right.
2. Compare every element with its next element.
3. If arr[i] > arr[i + 1], the array is not sorted.
4. If no such pair exists, the array is sorted.

Example:
Array: [1, 2, 2, 4, 7]

1 <= 2
2 <= 2
2 <= 4
4 <= 7

Result: Sorted

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Arrays
- Linear Traversal
- Adjacent Element Comparison
- Early Termination
- Edge Case Handling

============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    if (n <= 0){
        cout << "Invalid array size."<<endl;
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++){
        if (arr[i] > arr[i + 1]){
            cout << "Array is not sorted."<<endl;
            return 0;
        }
    }
    cout << "Array is sorted."<<endl;
   return 0;
}