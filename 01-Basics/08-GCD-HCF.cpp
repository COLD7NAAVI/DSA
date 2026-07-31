/*
============================================================
Problem : GCD / HCF (Euclidean Algorithm)
============================================================

Approach:
1. Take two integers a and b.
2. Repeatedly compute the remainder (a % b).
3. Replace:
      a = b
      b = remainder
4. Repeat until b becomes 0.
5. The value of a is the GCD.

Why it Works:
GCD(a, b) = GCD(b, a % b)

Time Complexity:
O(log(min(a, b)))

Space Complexity:
O(1)

Concepts Used:
- Euclidean Algorithm
- Modulo (%)
- Loops
- Mathematical Observation

============================================================
*/



/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Find GCD/HCF of a & B. "<<endl;
    cout << "Enter number a " <<endl;
    cin >> a;
    cout << "Enter number b " <<endl;
    cin >> b;
    a = abs(a);
    b = abs(b);
    if (a == 0) {
        cout << "GCD is: " << b << endl;
        return 0;
    }
    if (b == 0) {
        cout << "GCD is: " << a << endl;
        return 0;
    }
    int c = min(a,b);
    int gcd = 1;
    for (int i = c; i >= 1; i--){
        if(a%i ==0 && b%i ==0){
            gcd = i;
            break;
        }
    }
    cout<<"GCD(" <<a<<","<<b<<") is "<< gcd <<endl;
   return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Find GCD/HCF using Euclidean Algorithm\n";
    cout << "Enter a :"<<endl;
    cin >> a;
    cout << "Enter b :"<<endl;
    cin >> b;
    a = abs(a);
    b = abs(b);
    while( b!= 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << "GCD = " << a << endl;

   return 0;
}