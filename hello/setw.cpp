// C++ code to demonstrate
// the working of setw() function

#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;

int main()
{

	// Initializing the integer
	int num = 50;

	cout << "Before setting the width: \n"
		<< num << endl;

	// Using setw()
	cout << "Setting the width"
		<< " using setw to 100: \n"
		<< setw(100);

	cout << num << endl;

	return 0;
}
