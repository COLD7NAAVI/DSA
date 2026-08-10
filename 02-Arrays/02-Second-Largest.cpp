/*
============================================================
Problem : Second Largest Element in an Array
============================================================

Approach:
1. Initialize largest with the first array element.
2. Traverse the remaining elements once.
3. If the current element is greater than largest:
      - Move largest to secondLargest.
      - Update largest.
4. Otherwise, if the current element is strictly smaller
   than largest and greater than secondLargest:
      - Update secondLargest.
5. Use a boolean flag to detect whether a second distinct
   largest element exists.

Example:
Array: [12, 35, 1, 10, 34]

Largest        = 35
Second Largest = 34

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Arrays
- Linear Traversal
- Comparison
- Greedy / Running Maximum
- Edge Case Handling
============================================================
*/
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size.";
        return 0;
    }

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    // Initialize
    int largest = arr[0];
    int secondLargest = INT_MIN;
    bool hasSecondLargest = false;

    // Traverse the array
    for (int i = 1; i < n; i++)
    {
        // Compare current element with largest
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
            hasSecondLargest = true;
        }
        else if (arr[i] < largest && (!hasSecondLargest || arr[i] > secondLargest))
        {
            secondLargest = arr[i];
            hasSecondLargest = true;
        }
    }
    if (!hasSecondLargest)
    {
        cout << "No second largest distinct element exists." << endl;
    }
    else
    {
        cout << "Largest element in array is : " << largest << endl;
        cout << "Second Largest element in array is : " << secondLargest << endl;
    }
     return 0;
}