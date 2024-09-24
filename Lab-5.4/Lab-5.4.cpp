// This program finds the average time spent programming by a student
// each day over a three day period.

// Even Jorgens, Xander Perez & Nicholas Mora

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day = 0;	// these are the counters for the loops
	int numClasses;
	int classes;
	int amountDay;
	string className;

	cout << "This program will find the average number of hours a day"
		 << " that a student spent doing homework over a long weekend\n\n";
	cout << "How many students are there ?" << endl;
	cin >> numStudents;
	cin.ignore();
	cout << "How many days in the long weekend?\n";
	cin >> amountDay;
	cin.ignore();

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;
		cout << "How many classes is student "<< student << " taking?\n";
		cin >> numClasses;
		cin.ignore();
		
		for(classes = 1; classes <= numClasses; classes++)
		{
			total = 0;
			cout << "What is the subject of class " << classes << "?\n";
			getline(cin, className);

			for (day = 1; day <= amountDay; day++)
			{
				cout << "Please enter the number of hours worked by student "
					<< student << " on day " << day << "." << endl;
				cin >> numHours;
				cin.ignore();

				total = total + numHours;
			}
		
			average = total / amountDay;

			cout << endl;
			cout << "The average number of hours per day spent doing" << className
				<< " by student " << student << " is " << average << " hours."
				<< endl << endl << endl;
		}
	}

	return 0;
}