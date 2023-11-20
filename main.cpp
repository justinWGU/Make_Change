// Justin Ortiz Make Change Program

#include <iostream>
using namespace std;
 
void ComputeChange(int totCents, int& numQuarters, int& numDimes, int& numNickels, int& numPennies) {
   int leftOver;
   
   numQuarters = totCents / 25;
   leftOver = totCents % 25;
   numDimes = leftOver / 10;
   leftOver = leftOver - numDimes * 10;
   numNickels = leftOver / 5;
   leftOver = leftOver - numNickels * 5;
   numPennies = leftOver / 1;
}

int main() {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;
   
   cout << "Enter total cents: " << endl;
   cin >> userCents;


   ComputeChange(userCents, numQuarters, numDimes, numNickels, numPennies);

   cout << "Quarters: " << numQuarters << endl;
   cout << "Dimes: " << numDimes << endl;
   cout << "Nickels: " << numNickels << endl;
   cout << "Pennies: " << numPennies << endl;

   return 0;
}
