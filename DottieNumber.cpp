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
	double CurrentNumber, PreviousNumber, diff;
	int iterations = 0;
	bool DottieFound = false;
	CurrentNumber = input;

	// if-then statements ensure that PreviousNumber is not the same as CurrentNumber when the program initializes.
	if (CurrentNumber == 1)
	{
		PreviousNumber = 0;
	}
	else
		PreviousNumber = 1;

	// calculate the dottie number
	while (DottieFound != true)
	{
		PreviousNumber = CurrentNumber;
		CurrentNumber = cos(CurrentNumber);
		iterations++;

		// debugging statements
		cout << PreviousNumber << "  " << CurrentNumber << endl;
		cout << iterations;

		// calculate difference between currentnumber and previousnumber. if the difference is small enough (due to floating point shenanignas) then the dottie number is found.
		diff = CurrentNumber - PreviousNumber;
		if (diff < .00001 && iterations > 100)
			DottieFound = false;		
	}

	cout << "\nThe Dottie Number of " << input << " is " << CurrentNumber << endl;
}