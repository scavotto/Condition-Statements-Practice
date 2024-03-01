// NumberComparison.cpp
// This program accepts 3 numbers from the user.  
// It then checks if the sum of 2 numbers equals the third number,
// and prints an appropriate message based on the result.

#include <iostream>
using namespace std;

int main() {

  double firstNumber, secondNumber, thirdNumber;
  
  cout << "Enter first number: ";
  cin >> firstNumber;

  cout << "Enter second number: ";
  cin >> secondNumber;

  cout << "Enter third number: ";
  cin >> thirdNumber;

  if (firstNumber + secondNumber == thirdNumber) {
    cout << "The sum of the first two numbers equals the third number";
  }
  
  else if (firstNumber + thirdNumber == secondNumber) {
    cout << "The sum of the first and third numbers equals the second number";
  }

  else if (secondNumber + thirdNumber == firstNumber) {
    cout << "The sum of the second and third numbers equals the first number";
  }

  else {
    cout << "No two numbers sum to the third number";
  }

  return 0;
}