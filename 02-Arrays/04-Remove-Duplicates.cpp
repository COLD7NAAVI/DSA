/*
============================================================
Problem: Remove Duplicates from Sorted Array

Approach:
1. The array must be sorted.
2. Maintain a `unique` pointer representing the position
   of the last unique element.
3. Traverse the array using `i`.
4. If arr[i] differs from arr[unique]:
   - Increment unique.
   - Store arr[i] at arr[unique].
5. The number of unique elements is unique + 1.

Example:
Input:
[1, 1, 2, 2, 3, 4, 4]

Output:
[1, 2, 3, 4]

Unique elements = 4

Technique:
Two Pointers / In-place Array Modification

Time Complexity:
O(n)

Space Complexity:
O(1)

Note:
The input array must be sorted.

============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of sorted array : ";
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

    for(int i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
            cout << "Array is not sorted."<<endl;
            return 0;
        }
    }

    int unique = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] != arr[unique]){
            unique++;
            arr[unique] = arr[i];
        }
    }
    cout << "Number of unique elements in array is : "<< unique + 1<<endl;
    cout << "Unique portion of array is : ";
    for (int i = 0; i <= unique; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
   return 0;
}