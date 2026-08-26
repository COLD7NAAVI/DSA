/*
------------------------------------------------------------
Program : Find Number Appearing Once
File    : 11-Find-Number-Appearing-Once.cpp
Concept : Arrays, XOR

Algorithm:
1. Initialize ans = 0.
2. Traverse every element of the array.
3. XOR each element with ans.
4. Duplicate elements cancel each other because:
   a ^ a = 0
5. The remaining value is the number appearing once.
6. Print ans.

Time Complexity  : O(n)
Space Complexity : O(1)
------------------------------------------------------------
*/
/*
Note:
Every element appears exactly twice
except one element, which appears once.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    if ( n <= 0){
        cout << "Invalid array size !"<<endl;
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << "Number appearing once is : " << ans << endl;

   return 0;
}