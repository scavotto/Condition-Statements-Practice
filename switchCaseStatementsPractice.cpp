// EmployeeBonus2.cpp - This program calculates an employee's yearly bonus. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
   // Declare and initialize variables.
   string employeeFirstName; 
   string employeeLastName; 
   double employeeSalary;	
   int employeeRating; 
   double employeeBonus;
   const double BONUS_1 = .25;
   const double BONUS_2 = .15;
   const double BONUS_3 = .10; 
   const double NO_BONUS = 0.00;
   const int RATING_1 = 1;
   const int RATING_2 = 2;
   const int RATING_3 = 3; 

   // Get user input		
   cout << "Enter employee's first name: ";
   cin >> employeeFirstName;

   cout << "Enter employee's last name: ";
   cin >> employeeLastName;

   cout << "Enter employee's yearly salary: ";
   cin >> employeeSalary;
   
   cout << "Enter employee's performance rating: ";
   cin >> employeeRating; 

   // Use switch statement to calculate bonus based on rating



   // Output  
   cout << "Employee Name: " << employeeFirstName << " " << employeeLastName << endl;
   cout << "Employee Salary: $" << employeeSalary << endl;
   cout << "Employee Rating: " << employeeRating << endl;
   cout << "Employee Bonus: $" << employeeBonus << endl;
   
   return 0;
} 	