 /*
============================================================
Problem : Print All Divisors of a Number (Sorted Order)
============================================================

Approach:
1. Every divisor i of n has a paired divisor (n / i).
2. Divisors always occur in pairs around √n.
3. First loop:
      - Traverse from 1 to √n.
      - Print the smaller divisor (i).
4. Second loop:
      - Traverse backwards from √n to 1.
      - Print the paired divisor (n / i).
      - Skip duplicate when i * i == n.

Example:
n = 36

First Loop:
1 2 3 4 6

Second Loop:
9 12 18 36

Output:
1 2 3 4 6 9 12 18 36

Time Complexity:
O(√n)

Space Complexity:
O(1)

Concepts Used:
- Divisor Pair Property
- Square Root Optimization
- Two-Pass Traversal
- Mathematical Observation

============================================================
*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout << "Enter the number n :";
    cin >> n;
    n = abs(n);
    if (n == 0)
    {
        cout << "0 has infinitely many divisors.";
        return 0;
    }   
    int i;
    for (i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    i--;
    for(; i > 0; i--){
        if(n % i == 0){
            if(i * i != n){
                cout << n/i << " ";
            }
        }
    }

    return 0;
 }