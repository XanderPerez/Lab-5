// Even Jorgens, Xander Perez & Nicholas Mora
// Enter CSCI - 40
#include <iostream>
using namespace std;

int main()
{
   int numTellers;
   int teller;
   int sickDays;
   int numSickDays = 0;
   int years;
   int numYears = 3;
   int totalDays;

   cout << "This program will find the total number of days that"
        << "the tellers were out sick over the last 3 years.\n";
   cout << "How many tellers are there?\n";
   cin >> numTellers;

   for (teller = 1; teller <= numTellers; teller++) 
   {
      for (years = 1; years <= numYears; years++)
      {
         cout << "How many sick days was teller " << teller << " gone for year " << years << "?\n";
         cin >> sickDays;
         numSickDays += sickDays;
      }
   }
   cout << "The " << numTellers << " tellers were out for " << numSickDays << " days " 
   << "over the last 3 years\n";

   return 0;
}
