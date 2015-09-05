/* DottieNumber.cpp

This program is written to solve the problem found at https://redd.it/3i99w8

*/

#include <iostream>
#include <cmath> //note to self, cmath is used in C++ while math.h is used in C
using namespace std;

int main()
{
	// Get input
	float input;
	cout << "Enter a number to find the Dottie Number: ";
	cin >> input;

	// setting up variables for later use
	double CurrentNumber = input;
	int iterations = 0;

	// calculate the dottie number
	while(abs(CurrentNumber - cos(CurrentNumber)) > .000001)
	{
		iterations++;

		CurrentNumber = cos(CurrentNumber);

	}

	cout << "\nThe Dottie Number of " << input << " is " << CurrentNumber << " and was found in " << iterations << " iterations." << endl;
}