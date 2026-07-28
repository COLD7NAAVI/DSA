/*
============================================================
Problem : Armstrong Number
============================================================

Approach:
1. Store the original number.
2. Count the total number of digits.
3. Restore the working number.
4. Extract each digit using (% 10).
5. Raise each digit to the power of the digit count.
6. Add the result to the running sum.
7. Compare the final sum with the original number.

Time Complexity:
O(log10 n)

Space Complexity:
O(1)

Concepts Used:
- Digit Manipulation
- Modulo (%)
- Integer Division (/)
- pow() Function
- Loops

============================================================
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int originalNumber;
    cout << "Enter the number : ";
    cin >> originalNumber;
    int workingNumber = originalNumber;
    int count = 0;
    if (workingNumber == 0) {
        cout << workingNumber << " has 1 digit and its Armstrong Number." << endl;
        return 0;
    }
    while (workingNumber != 0) {
        workingNumber = workingNumber / 10;
        count++;
    }
    workingNumber = originalNumber;
    int sum = 0;
    int digit;
    while(workingNumber != 0){
        digit = workingNumber % 10;
        sum += pow(digit,count);
        workingNumber /= 10;
    }
    if (sum == originalNumber){
        cout << originalNumber << " is Armstrong Number.";
    }
    else{
        cout << originalNumber << " is not an Armstrong Number.";
    }
    
   return 0;
}