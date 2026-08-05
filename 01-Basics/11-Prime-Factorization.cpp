/*
==============================================================
Problem : Prime Factorization (Optimal)

Description:
Print all prime factors of a given integer using
the optimized O(√n) algorithm.

Approach:
1. Convert negative numbers to positive using abs().
2. Handle special cases:
   - 0 : Prime factorization is undefined.
   - 1 : No prime factors.
3. Start checking divisibility from i = 2.
4. While i divides n:
      - Print i.
      - Divide n by i.
5. Continue until i * i > n.
6. If n > 1 after the loop, print n because it is prime.

Example:

84
↓

84 ÷ 2 = 42
42 ÷ 2 = 21
21 ÷ 3 = 7

Remaining 7 is prime.

Output:
2 2 3 7

Time Complexity:
O(√n)

Space Complexity:
O(1)

Concepts Used:
- Prime Numbers
- Prime Factorization
- Trial Division
- Mathematical Optimization
==============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number n: ";
    cin >> n;
    n = abs(n);
    if (n == 0)
    {
        cout << "Prime factorization of 0 is undefined.";
        return 0;
    }   
    if ( n == 1){
        cout << "1 has no prime factors." << endl;
        return 0;
    }
    cout << "Prime factors: ";
    for(int i = 2; i * i <= n; i++){
        while ( n % i == 0){
            cout << i << " ";
            n = n / i;
        }
    }
    if(n > 1){
        cout << n;
    }
    cout << endl;
   return 0;
}