/* # Prime Number

## Problem
Determine whether a given number is prime.

## Brute Force Approach
Check divisibility from 2 to n-1.

### Time Complexity
O(n)

---

## Optimized Approach

### Observation
Factors always occur in pairs.
If one factor is greater than √n, the other must be smaller than √n.

Therefore, checking divisibility only up to √n is sufficient.

### Algorithm
1. If n <= 1 → Not Prime.
2. Assume the number is prime.
3. Check divisibility from 2 while i * i <= n.
4. If divisible, mark as not prime.
5. Otherwise, it is prime.

### Time Complexity
O(√n)

### Space Complexity
O(1)

## Key Concepts
- Factor Pairs
- Square Root Optimization
- Boolean Flag
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