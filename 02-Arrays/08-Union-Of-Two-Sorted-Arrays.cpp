/*
------------------------------------------------------------
Program : Union Of Two Sorted Arrays
File    : 08-Union-Of-Two-Sorted-Arrays.cpp
Concept : Arrays, Two Pointers

Algorithm:
1. Initialize three pointers: i, j, and k.
2. Compare elements from both sorted arrays.
3. Insert the smaller element into the result array.
4. If both elements are equal, insert only one copy.
5. Avoid duplicates by comparing with the previously inserted element.
6. Copy any remaining elements from either array.
7. Print the union array.

Time Complexity  : O(n + m)
Space Complexity : O(n + m)
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
    if (n <= 0 || m <= 0){
        cout << "Invalid array size."<<endl;
        return 0;
    }
    int arr1[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << "of array 1 : ";
        cin >> arr1[i];
    }
    int arr2[m];
    for(int j = 0; j < m; j++){
        cout << "Enter element "<< j << "of array 2 : ";
        cin >> arr2[j];
    }
    for (int i = 0; i < n-1; i++){
        if (arr1[i] > arr1[i + 1]){
            cout << "Array 1 is not sorted."<<endl;
            return 0;
        }
    }
    for (int j = 0; j < m-1; j++){
        if (arr2[j] > arr2[j + 1]){
            cout << "Array 2 is not sorted."<<endl;
            return 0;
        }
    }
    int i = 0, j = 0, k = 0;
    int result[n + m];
    while(i < n && j < m){
        int val;
        if(arr1[i] < arr2[j]){
            val = arr1[i];
            i++;
        }
        else if ( arr1[i] > arr2[j]){
            val = arr2[j];
            j++;
        }
        else{
            val = arr1[i];
            i++;
            j++;
        }
        if (k == 0 || result[k - 1] != val){
            result[k] = val;
            k++;
        }
    }
    while(i < n){
        if (k == 0 || result[k-1] != arr1[i]){
            result[k] =arr1[i];
            k++;
        }
        i++;
    }
    while(j < m){
        if(k == 0 || result[k-1] != arr2[j]){
            result[k] = arr2[j];
            k++;
        }
        j++;
    }
    cout << "Union array: ";
    for (int index = 0; index < k; index++){
        cout << result[index] << " ";
    }
    cout << endl;

    return 0;
}