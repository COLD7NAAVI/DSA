/*
============================================================
Problem : Least Common Multiple (LCM)
============================================================

Approach:
1. Take two integers a and b.
2. Store their original values.
3. Handle the special case:
   - If either number is 0, LCM is 0.
4. Find GCD using Euclid's Algorithm.
5. Compute:
      LCM = (a × b) / GCD
6. Print the LCM.

Why it Works:
LCM(a, b) × GCD(a, b) = |a × b|

Time Complexity:
O(log(min(a, b)))

Space Complexity:
O(1)

Concepts Used:
- Euclidean Algorithm
- Greatest Common Divisor (GCD)
- Least Common Multiple (LCM)
- Modulo (%)
- Integer Division (/)
- Mathematical Observation

============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Find LCM of two numbers using GCD\n";
    cout << "Enter a :"<<endl;
    cin >> a;
    cout << "Enter b :"<<endl;
    cin >> b;
    a = abs(a);
    b = abs(b);
    int originalA = a;
    int originalB = b;
    if (a == 0 || b == 0)
    {
        cout << "LCM = 0";
        return 0;
    }
    while( b!= 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << "LCM = " << (1LL * originalA * originalB) / a << endl;
   return 0;
}