// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number

#include <iostream>
using namespace std;

int main() {

  int num1;

  cout << "abe integer daal yeha: ";
  cin >> num1;

  if (num1>80) {
    cout << " you are passed " << num1 << endl;
  }
  else {
    cout << "you are failed: " << num1<< endl;
  }

  cout << "ye code (mai jhukeka nhi sala).";

  return 0;
}