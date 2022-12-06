//  Write a program in C++ to find the first 10 natural numbers. Go to the editor
// Sample output:
//  #include <iostream>
// using namespace std;

// int main(){
     
//      for (int i=1; i<=10; ++i){
//            cout<<i<<endl;


//      }
// return 0;

// }




// Write a program in C++ to find the sum of first 10 natural numbers. Go to the editor
// Sample Output:
// Find the first 10 natural numbers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,sum=0;
//     cout << "\n\n Find the first 10 natural numbers:\n";
//     cout << "---------------------------------------\n";
//     cout << " The natural numbers are: \n";
//     for (i = 1; i <= 10; i++) 
//     {
//         cout << i << " ";
// 		sum=sum+i;
//     }
//      cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
// }

#include <iostream>
using namespace std;

int main(){
     int i; 
     int sum=0;
     for (i = 1; i <= 10; i++){
        cout << i <<endl;
     sum=sum +i;
     }
cout<<"sum "<<sum<<endl;

}