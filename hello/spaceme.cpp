#include <iostream>
using namespace std;
int main() {
  int weightP;
  double weightE;
  

  cout<<"weight on earth"<<endl;
  cin>>weightE;
int i;
  cout<<"enter a number for the planet you wants to fight on."<<endl;
  cin>>i;
  cout<<"venus"<<endl;
  if (i== 1) {
 
    weightP = weightE * 0.78;
 
  } else if (i == 2) {
 
    weightP = weightE * 0.39;
 
  } else if (i == 3) {
 
    weightP = weightE * 2.65;
 
  } else if (i == 4) {
 
    weightP = weightE * 1.17;
 
  } else if (i == 5) {
 
    weightP = weightE * 1.05;
 
  } else if (i == 6) {
 
    weightP = weightE * 1.23;
 
  }
cout<<"yout weight should be :"<<weightP<<endl;

  
  
  
  
  
  
  
  
  
}