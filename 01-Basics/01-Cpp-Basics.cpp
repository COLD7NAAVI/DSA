//Day 1: C++ Basics.... Am coding after a long time;
#include <iostream>
#include <string>
#include <vector>

/*you need to add the following line to use the C++17 standard.
std::string str = "Hello, World!"; if you don't include string header file, 
you will get an error.
*/

using namespace std;
int adding_xy(int x, int y) {
        return x+y;
    };
void PassByValue(int num) 
    {
        num = num + 100;
        cout <<num << endl;
    };
void PassByReference(int &num)
    {
        num = num + 100;
    };

int main() {
    //Variables
    cout << "For Variables "<< endl;
    int x = 5;
    cout << "x = " << x << endl;

    // Input Output
    cout << "For input, Output "<< endl;
    int y;
    cout << "Enter a number: ";
    cin >> y;
    cout << "Entered number = " << y << endl;

    // Operators
    cout << "For Operators "<< endl;
    cout << "let a = 5 and b = 10" << endl;
    int a = 5;
    int b = 10;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << endl;
   
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;
    cout << "++a = " << ++a << endl;

    // If Else
    cout << "For If Else "<< endl;
    if ( a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is less than or equal to b" << endl;
    };

    // Switch
    cout << "For Switch "<< endl;
    switch (a) {
        case 1 :
            cout << "a is 1" << endl;
            break;
        case 2 :
            cout << "a is 2 " << endl;
            break;
        case 3 :
            cout << "a is 3" << endl;
            break;
        default :
            cout << "a is not 1, 2 or 3" << endl;
            break;
    };
   
    // For Loop
    cout << "For For Loop "<< endl;
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
    };

    // While Loop
    cout << "For While Loop "<< endl;
    int c = 7;
    while (c < 10) {
        cout << "c = " << c << endl;
        c++;
    };

    // Do While Loop
    cout << "For Do While Loop "<< endl;
    int d = 20;
    do {
        cout << "d = " << d << endl;
        d++;
    } while (d < 15);
    
    // Functions
    cout << "For Functions "<< endl;
    cout << "10 + 30 = " << adding_xy(10, 30) << endl;

    // Arrays
    cout << "For Arrays "<< endl;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    };

    // Strings
    cout << "For Strings "<< endl;
    string str = "Hello, World!";
    cout << str << endl;

    // Vectors
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int value : vec) {
        cout << value << endl;
    };  

    // Pass by Value
    cout << "For Pass by Value "<< endl;
    cout << "Enter num = ";
    int e;
    cin >> e ; 
    cout << "Before PassByValue : " << e << endl;
    PassByValue(e);
    cout << "After PassByValue  : " << e << endl;

    // Pass by Reference
    cout << "For Pass by Reference "<< endl;
    cout << "Before PassByReference : " << e << endl;
    PassByReference(e);
    cout << "After PassByReference  : " << e << endl;

   return 0;
}
// Wrote this with own logic, Feeling Good !
//I didn't asked ChatGPT for the solution.
//I tried.
//I made mistakes.
//I debugged.
//Then i asked for a review.