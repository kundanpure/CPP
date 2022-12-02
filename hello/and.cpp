// C++ program demonstrating && operator truth table

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
  
    // false && false = false
    cout << ((a == 0) && (a > b)) << endl;
  
    // false && true = false
    cout << ((a == 0) && (a < b)) << endl;

    // true && false = false
    cout << ((a == 5) && (a > b)) << endl;

    // true && true = true
    cout<< ((a==5) && (b=9)) << endl;

    return 0;
}