// Xander Perez, Even Jorgens & Nicholas Mora

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	do 
	{
		cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;
	}
	while (letter != '`');
	return 0;
}