/*
======================================================================
Problem : Sieve of Eratosthenes (Find All Prime Numbers up to N)
======================================================================

Approach:

1. Create a boolean array prime[] of size (n + 1).
2. Assume every number is prime.
3. Mark 0 and 1 as not prime.
4. Traverse from i = 2 while i * i <= n.
5. If i is still prime:
      Mark every multiple of i starting from i * i as non-prime.
6. Print every index that is still marked prime.

Why it Works:

- Every composite number has a prime factor <= √N.
- Multiples smaller than i² have already been marked by smaller primes.
- Therefore:
      Outer Loop : i * i <= n
      Inner Loop : j = i * i

Time Complexity:

O(N log log N)

Space Complexity:

O(N)

Concepts Used:

- Boolean Array
- Sieve of Eratosthenes
- Prime Numbers
- Mathematical Optimization
- Nested Loops
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    if (n < 2) {
        cout << "No prime numbers in this range.\n";
        return 0;
    }
    bool* prime = new bool[n + 1];
    for (int i = 0; i <= n ; i++){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++){
        if (prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << ": \n";
    for (int i = 2; i <= n; i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    cout << endl;
    delete[] prime;

   return 0;
}