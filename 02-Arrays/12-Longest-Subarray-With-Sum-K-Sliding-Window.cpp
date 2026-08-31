/*
Problem: Longest Subarray With Sum K
Approach: Sliding Window (Two Pointers)

Given an array of positive integers and an integer K,
find the length of the longest contiguous subarray
whose sum is exactly K.

Example:
Array: [1, 2, 1, 1, 1]
K = 3
Answer: 3
Subarray: [1, 1, 1]

Time Complexity: O(n)
Space Complexity: O(1)

Note:
The Sliding Window approach works here because all
array elements are positive integers.
*/
#include<iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;
    if (n <= 0){
        cout << "Invalid array size !"<<endl;
        return 0;
    }
    cout << "Enter the value of k : ";
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    int i = 0;
    int sum = 0;
    int maxLength = 0;
    int startIndex = -1;
    for(int j = 0; j < n; j++){
        sum += arr[j];
        while(sum > k){
            sum -= arr[i];
            i++;
        }
        if(sum == k){
            int length = j - i + 1;
            if(length > maxLength){
                maxLength = length;
                startIndex = i;
            }
        
        }

    }
    if(maxLength == 0){
        cout << "No subarray found with sum "<< k << endl;
    }else{
        cout << "Longest Subarray Length: " << maxLength << endl;
        cout << "Subarray elements: [ ";
        for (int i = startIndex; i < startIndex + maxLength; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }

   return 0;
}