/*
==============================================================
Problem : Largest Element in an Array

Approach:

1. Read array size.
2. Read all array elements.
3. Assume first element is the largest.
4. Traverse remaining elements.
5. If current element is larger,
      update largest.
6. Print largest element.

Why it Works:

The algorithm maintains a running maximum.

Every element is compared exactly once.

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Arrays
- Traversal
- Running Maximum
==============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : "; 
    cin >> n;
    if (n <= 0){
        cout << "Size of array is undefined !";
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n ; i ++){
        cout << "Enter the element "<< i <<" of array : "<<endl;
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element in array is : " << largest << endl;
    
   return 0;
}