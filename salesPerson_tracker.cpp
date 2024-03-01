// salesperson_tracker.cpp 

// This program takes salesperson ID, items sold, and total sales 
// as input and checks if the salesperson is a high performer 
// (over 200 items sold). If yes, it prints a message identifying
// them as a high performer.

#include <iostream>
using namespace std;

int main() {

  int salespersonID, numItemsSold;
  double totalValue;
  const int HIGH_PERFORMER_THRESHOLD = 200;

  cout << "Enter salesperson ID number: ";
  cin >> salespersonID;

  cout << "Enter number of items sold last month: ";
  cin >> numItemsSold;
   
  cout << "Enter total value of items sold: $";
  cin >> totalValue;

  if(numItemsSold > HIGH_PERFORMER_THRESHOLD) {
    cout << salespersonID << endl; 
    cout << "Number of items sold: " << numItemsSold << endl;
    cout << "Total value of items: $" << totalValue << endl;
    cout << "This salesperson is a HIGH PERFORMER" << endl; 
  }

  return 0;
}