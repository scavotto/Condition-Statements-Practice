// Multiply.cpp - This program prints the numbers 0 through 10 along
// with these values multiplied by 2 and by 10.
// Input:  None
// Output: Prints the numbers 0 through 10 along with their values multiplied by 2 and by 10. 

#include <iostream>
#include <string>
using namespace std;

int main()
{		
   string head1 = "Number: ";
   string head2 = "Multiplied by 2: ";
   string head3 = "Multiplied by 10: ";				
   int numberCounter;  // Numbers 0 through 10
   int byTen;  // Stores the number multiplied by 10
   int byTwo;  // Stores the number multiplied by 2
   const int NUM_LOOPS = 10;    // Constant used to control loop

   cout << "0 through 10 multiplied by 2 and by 10." << endl;

   // Write while loop here   
      while (counter <= 10) {
      int byTen = counter * 10;  // Stores the number multiplied by 10
      int byTwo = counter * 2;  // Stores the number multiplied by 2
    
    // Loop body
      cout << "Number: " << counter << endl;
      cout << "Multiplied by 2: " << byTwo << endl;
      cout << "Multiplied by 10: " << byTen << endl;
      cout << endl;
    counter++;  // Increment the loop control variable
}
   
   return 0;
} 