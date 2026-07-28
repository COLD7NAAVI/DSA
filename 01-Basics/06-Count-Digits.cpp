/*
============================================================
Problem : Count Digits
============================================================

Approach:
1. Handle the special case when the number is 0.
2. Initialize a counter.
3. Repeatedly divide the number by 10.
4. Increment the counter after removing each digit.
5. Print the total digit count.

Time Complexity:
O(log10 n)

Space Complexity:
O(1)

Concepts Used:
- Digit Manipulation
- Integer Division (/)
- Loops
- Counter

============================================================
*/
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