/*
============================================================
Problem : Prime Number
============================================================

Approach:
1. If the number is less than or equal to 1, it is not prime.
2. Assume the number is prime.
3. Check divisibility from 2 up to √n using (i * i <= n).
4. If any divisor is found, mark it as not prime.
5. Otherwise, the number is prime.

Time Complexity:
O(√n)

Space Complexity:
O(1)

Concepts Used:
- Loops
- Modulo (%)
- Square Root Optimization
- Boolean Flag
- Factor Pairs

============================================================
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <=1)
    {
        cout << n << " is not a prime number." << endl;
        
    }
    else
    {
        bool isPrime = true;
        for (int i=2; i * i <= n; i++)
        {
          if (n % i == 0){
            isPrime = false;
            break;
          }
        }
        if(isPrime){
            cout << n << " is a prime number."<<endl;
        }
        else{
            cout << n << " is not a prime number."<<endl;
        }       
    }
   return 0;
}