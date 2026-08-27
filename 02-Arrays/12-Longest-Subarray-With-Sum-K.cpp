/*
    Problem: Longest Subarray With Sum K

    Approach: Brute Force

    Time Complexity: O(n²)
    Space Complexity: O(1)

    Note:
    This program finds the longest contiguous subarray
    whose sum is equal to K and also prints the subarray.
*/
#include<iostream>
using namespace std;
int main()
{
    int k,n;
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "Enter the size of array : ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid array size !"<<endl;
        return 0;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element "<< i << ": ";
        cin >> arr[i];
    }
    int maxLength = 0;
    int startIndex = -1;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k){
                int length = j - i + 1;
                if(length > maxLength){
                    maxLength = length;
                    startIndex = i;
                }
            }
        }
    }
    if (maxLength == 0) {
        cout << "No subarray found with sum " << k << endl;
    } else {
        cout << "Longest Subarray Length: " << maxLength << endl;
        cout << "Subarray elements: [ ";
        for (int i = startIndex; i < startIndex + maxLength; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
    

   return 0;
}