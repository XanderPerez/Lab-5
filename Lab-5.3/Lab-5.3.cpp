// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Nicholas Mora, Even Jorgens, Xander Perez

#include <iostream>
using namespace std;

int main()
{
	int endValue;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	int startValue; // the starting value of numbers
	int count = 0;
	float mean;		// the average of the first n positive numbers

	cout << "Please enter a starting positive integer\n";
	cin >> startValue;
	cout << "Please enter a final positive integer" << endl;
	cin >> endValue;
	
	if (startValue > 0 && endValue > 0)
	{
		for (int number = startValue; number <= endValue; ++number)
		{
			total += number;
			++count;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / count;	// note the use of the typecast
													// operator here 
		cout << "The mean average of the first " << endValue
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}