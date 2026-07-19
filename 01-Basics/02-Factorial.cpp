/*
============================================================
Problem : Factorial of a Number
============================================================

Approach:
1. Check if the number is negative.
2. If n is 0 or 1, factorial is 1.
3. Otherwise, multiply numbers from 2 to n.
4. Print the factorial.

Time Complexity:
O(n)

Space Complexity:
O(1)

Concepts Used:
- Loops
- Conditional Statements
- Mathematical Computation

============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;

    }
    else if (n==0 || n==1)
    {
        cout << "Factorial of " << n << " is 1." << endl;
    }
    else {
        for(int i=n; i>=2; i--)
        {
         n = n * (i - 1);
        }
        cout << "Factorial of the number is: " << n << endl;
    }
    return 0;
}