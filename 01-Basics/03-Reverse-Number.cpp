/*
Problem: Reverse Number

Approach:
1. Initialize rev = 0
2. Extract last digit using %10
3. Append digit to rev
4. Remove last digit using /10
5. Repeat until n becomes 0

Time Complexity: O(log10 n)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "Reverse of the number is: " << rev << endl;
    return 0;
}