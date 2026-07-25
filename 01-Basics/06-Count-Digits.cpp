/*# Count Digits

## Problem
Count the number of digits present in an integer.

## Approach
Repeatedly divide the number by 10 until it becomes 0.
Each division removes one digit.

## Algorithm
1. If n == 0, answer is 1.
2. Initialize count = 0.
3. While n != 0:
   - count++
   - n = n / 10
4. Print count.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Key Concepts
- Digit Removal (/10)
- Loop until number becomes 0
- Works for positive and negative integers*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;

    if (n == 0) {
        cout << n << " has 1 digit." << endl;
        return 0;
    }

    int count = 0;

    // Works for both positive AND negative numbers without multiplying by -1
    while (n != 0) {
        n = n / 10;
        count++;
    }

    cout << count;

    return 0;
}