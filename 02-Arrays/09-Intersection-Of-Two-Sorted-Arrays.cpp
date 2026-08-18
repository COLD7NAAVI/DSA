/*
------------------------------------------------------------
Program : Intersection Of Two Sorted Arrays
File    : 09-Intersection-Of-Two-Sorted-Arrays.cpp
Concept : Arrays, Two Pointers

Algorithm:
1. Initialize two pointers (i and j) for both sorted arrays.
2. Compare arr1[i] and arr2[j].
3. If arr1[i] is smaller, move i.
4. If arr2[j] is smaller, move j.
5. If both elements are equal:
   - Store the element in the result array.
   - Avoid duplicates.
   - Move both pointers.
6. Continue until one array is completely traversed.
7. Print the intersection array.

Time Complexity  : O(n + m)
Space Complexity : O(min(n, m))
------------------------------------------------------------
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array 1 : ";
    cin >> n;
    int m;
    cout << "Enter the size of array 2 : ";
    cin >> m;
    if(n <= 0 || m <= 0){
        cout << "Invalid array size !"<<endl;
        return 0;
    }
    int arr1[n];
    int arr2[m];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << " of array 1 : ";
        cin >> arr1[i];
    }
    for(int j = 0; j < m; j++){
        cout << "Enter element "<< j << " of array 2 : ";
        cin >> arr2[j];
    }
    for(int i = 0; i < n-1; i++){
        if(arr1[i] > arr1[i+1]){
            cout << "Array 1 is not sorted."<<endl;
            return 0;
        }
    }
    for(int j = 0; j < m-1; j++){
        if(arr2[j] > arr2[j+1]){
            cout << "Array 2 is not sorted."<<endl;
            return 0;
        }
    }
    int i = 0, j = 0, k = 0;
    int max = (n < m) ? n : m;
    int result[max];
    while(i < n && j < m){
        int val;
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            val = arr1[i];
            if(k == 0 || result[k - 1] != val){
                result[k] = val;
                k++;
            }
            i++;
            j++;
        }
    }
    cout << "Insertion of two sorted arrays is : ";
    for(int index = 0; index < k; index++){
        cout << result[index] << " ";
    }
    cout << endl;
   return 0;
}