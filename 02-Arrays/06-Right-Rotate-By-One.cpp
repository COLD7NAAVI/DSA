/*
    ============================================================================
    File        : 06-Right-Rotate-By-One.cpp
    Author      : COLDGH0ST
    Description : Right-rotate an array by one position.

                  Example:
                  Input  : 1 2 3 4 5
                  Output : 5 1 2 3 4

                  Algorithm:
                  1. Store the last element in a temporary variable.
                  2. Shift all elements one position to the right.
                  3. Place the stored element at the beginning of the array.

    Time Complexity  : O(n)
    Space Complexity : O(1)
    ============================================================================
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
    int temp = arr[n-1];
    for (int i = n - 1; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout << "Array after performing Right-Rotate-By-One is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
   return 0;
}