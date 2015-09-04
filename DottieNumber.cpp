/* DottieNumber.cpp

This program is written to solve the problem found at https://redd.it/3i99w8

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// Get input
	float input;
	cout << "Enter a number to find the Dottie Number: ";
	cin >> input;

	// setting up variables for later use
	double CurrentNumber, diff;
	int iterations = 0;
	bool DottieFound = false;
	CurrentNumber = input;

	// calculate the dottie number
	while (CurrentNumber != cos(CurrentNumber))
	{
		iterations++;

		CurrentNumber = cos(CurrentNumber);

		/*
		// debugging statements
		cout << CurrentNumber << endl;
		cout << iterations << endl;
		*/

		if (iterations == 100)
			break;	
	}
	// note that comparing floats does not work. Even if i tried to calculate a difference between floats (such as 0.00001 difference) the program would not break. Hence the manual break after 100 iterations (which appears to get the dottie number of anything entered as an input. Crude but effective solution until the problem is figured out).

	cout << "\nThe Dottie Number of " << input << " is " << CurrentNumber << endl;
}