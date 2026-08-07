/*
==============================================================
Problem : Binary Exponentiation (Fast Power)

Approach:

1. Read base and exponent.
2. Initialize answer = 1.
3. While exponent > 0:
      - If exponent is odd:
            answer *= base
      - Square the base.
      - Divide exponent by 2.
4. Print answer.

Why it Works:

Exponent is processed bit by bit in binary.

If a bit is 1:
    Multiply answer by current base.

Every iteration:
    base = base²
    exponent /= 2

Example:

5^13

13 = 1101₂

5^13 = 5^8 × 5^4 × 5^1

Time Complexity:
O(log n)

Space Complexity:
O(1)

Concepts Used:
- Binary Representation
- Divide and Conquer
- Fast Exponentiation
- Bitwise Thinking
==============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    long long base;
    int power;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the power : ";
    cin >> power;
    long long answer = 1;
    while (power > 0){
        if (power % 2 != 0){
            answer *= base;
        }
        base *= base;
        power /= 2;
    }
    cout << answer;
    return 0;
}