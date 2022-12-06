#include <iostream>

int main() {
  int year = 0;
  std::cout<<"enter the year \n";
  std::cin>>year;
  if (year < 1000 || year > 9999) {
    std::cout<< "invalid entry.\n";
  }
  else if (year % 4 && year % 100){
    std::cout<<year;
    std::cout<<"year is a leap year.\n";

  }
  else {
    std::cout << year;
    std::cout << "is not a leap year.\n";
  }
}