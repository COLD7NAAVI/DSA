/*
============================================================
Problem : Left Rotate an Array by One Position

Approach:
1. Store the first element in a temporary variable.
2. Shift every element one position to the left.
3. Place the stored first element at the last position.

Example:
Input  : [1, 2, 3, 4, 5]
Output : [2, 3, 4, 5, 1]

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Arrays
- Linear Traversal
- In-place Modification
- Temporary Variable
- Array Rotation

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
    for (int i = 0; i < n; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    int temp = arr[0];
    for (int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    cout << "Array after performing Left-Rotate-By-One is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }

   return 0;
}