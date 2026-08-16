/*
------------------------------------------------------------
Program : Move Zeros To End
File    : 07-Move-Zeros-To-End.cpp
Concept : Arrays, Two Pointers

Algorithm:
1. Use two pointers (i and j).
2. Traverse the array with i.
3. When a non-zero element is found, swap it with arr[j].
4. Increment j after placing a non-zero element.
5. Print the modified array.

Time Complexity  : O(n)
Space Complexity : O(1)
------------------------------------------------------------
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
    int j = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout << "Array after moving zeroes to end is : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
   return 0;
}