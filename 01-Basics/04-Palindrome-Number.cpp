/*
============================================================
Problem : Palindrome Number
============================================================

Approach:
1. Store the original number.
2. Reverse the number using digit extraction.
3. Compare the reversed number with the original.
4. If both are equal, it is a palindrome.

Time Complexity:
O(log10 n)

Space Complexity:
O(1)

Concepts Used:
- Modulo (%)
- Integer Division (/)
- Digit Manipulation
- Loops

============================================================
*/

#include<iostream>
using namespace std;
int main()
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    long long original = n;
    long long rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << original << " is a palindrome number." << endl;
    }
    else
    {
        cout << original << " is not a palindrome number." << endl;
    }   
   return 0;
}