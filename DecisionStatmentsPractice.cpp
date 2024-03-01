// Airline.cpp - This program determines if an airline passenger is eligible for a 25% discount. 

#include <iostream>
#include <string>
using namespace std;
int main() 
{
   string passengerFirstName = ""; // Passenger's first name
   string passengerLastName = "";  // Passenger's last name
   int passengerAge = 0; 	   // Passenger's age


   cout << "Enter passenger's first name: ";
   cin >> passengerFirstName;
   cout << "Enter passenger's last name: ";
   cin >> passengerLastName;
   cout << "Enter passenger's age: ";
   cin >> passengerAge;
	

   // Test to see if this customer is eligible for a 25% discount				
    if(passengerAge <= 6 || passengerAge >= 65) {
        cout << "Passenger is eligible for a discount.";
    }
    else    
        cout << "Passenger is not eligible for a discount.";
        
   return 0;
} 
