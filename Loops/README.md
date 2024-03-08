# 🚴‍♂️Exercise 1

We are converting the following pseudocode into a working program. 

```cpp
// This program is supposed to display every fifth year
// starting with 2024; that is, 2024, 2029, 2034, 2039,
// and so on, for 30 years.
start
   Declarations
      num year
      num START_YEAR = 2039
      num FACTOR = 5
      num END_YEAR = 30
   year = START_YEAR
   while year <= END_YEAR
      output year
   endif
stop
```

First we start with debugging the pseudocode

```cpp
// This program is supposed to display every fifth year
// starting with 2024; that is, 2024, 2029, 2034, 2039,
// and so on, for 30 years.

start

Declarations
  num year
  num START_YEAR = 2024
  num FACTOR = 5
  num NUM_YEARS = 30

year = START_YEAR

while year <= START_YEAR + NUM_YEARS
  output year
  year = year + FACTOR
endwhile

stop
```

Then we move on to writing the code itself:

## 👩‍💻 Line by Line Coding Walkthrough

```cpp
#include <iostream>
```

This line includes the `iostream` header file, which provides input and output functionality in C++. It allows us to use `std::cout` for printing output to the console.

```cpp
int main() {
```

The `main()` function is the entry point of the program. It's where the execution of the program begins. Every C++ program must have a `main()` function.

```cpp
    int year;
    const int START_YEAR = 2024;
    const int FACTOR = 5;
    const int NUM_YEARS = 30;
    int counter = 0;
```

Here, we declare the variables used in the program:

- `year` is an integer variable that will store the current year being displayed.
- `START_YEAR`, `FACTOR`, and `NUM_YEARS` are declared as constant integers (`const int`) because their values remain unchanged throughout the program. It's a good practice to use constants for values that don't change.
- `counter` is an integer variable introduced to keep track of the number of years displayed.

```cpp
    year = START_YEAR;
```

This line initializes the `year` variable with the value of `START_YEAR`, which is 2024. It sets the starting point for the program.

```cpp
    while (year <= START_YEAR + NUM_YEARS) {
```

The `while` loop is used to repeatedly execute a block of code as long as the condition inside the parentheses is true. In this case, the loop continues as long as `year` is less than or equal to `START_YEAR + NUM_YEARS`, which represents the ending year.

```cpp
        std::cout << year << std::endl;
```

Inside the loop, we use `std::cout` to print the current value of `year` to the console. The `<<` operator is used to send the value to the output stream. `std::endl` is used to insert a newline character after printing the year.

```cpp
        year = year + FACTOR;
```

After printing the year, we increment the `year` variable by `FACTOR`, which is 5. This step ensures that we move to the next year in the sequence.

```cpp
        counter++;
```

The `counter` variable is incremented by 1 in each iteration of the loop. It keeps track of the number of years displayed.

```cpp
    std::cout << "Total years displayed: " << counter << std::endl;
```

After the loop ends, we print the total number of years displayed using `std::cout`. The message "Total years displayed: " is followed by the value of the `counter` variable.

```cpp
    return 0;
}
```

The `return 0;` statement indicates the successful execution of the program. It is a convention in C++ to return 0 from the `main()` function if the program runs without any errors.

I hope this explanation helps you understand the purpose of each line of code in the converted program. Let me know if you have any further questions!

## 💻 Final Code

```cpp
#include <iostream>

int main() {
    // Declarations
    int year;
    const int START_YEAR = 2024;
    const int FACTOR = 5;
    const int NUM_YEARS = 30;
    int counter = 0;

    year = START_YEAR;

    while (year <= START_YEAR + NUM_YEARS) {
        std::cout << year << std::endl;
        year = year + FACTOR;
        counter++;
    }

    std::cout << "Total years displayed: " << counter << std::endl;

    return 0;
}
```

### 🤠 Output

```cpp
2024
2029
2034
2039
2044
2049
2054
Total years displayed: 7
```

# Exercise 2

We are converting the following pseudocode into a working program:

```cpp
// A standard mortgage is paid monthly over 30 years.
// This program is intended to output 360 payment coupons
// for each new borrower at a mortgage company.
// Each coupon lists the month number, year number,
// and a friendly mailing reminder.
start
   Declarations
      num MONTHS = 12
      num YEARS = 30
      string MSG = "Remember to allow 5 days for mailing"
      num acctNum
      num yearCounter
   housekeeping()
   while acctNum <> QUIT
      printCoupons()
   endwhile
   finish()
stop

housekeeping()
   print "Enter account number or ", QUIT, " to quit "
   input acctNum
return

printCoupons()
   while yearCounter <= YEARS
      while monthCounter <= MONTHS
         print acctNum, monthCounter, yearCounter, MSG
         monthCounter = monthCounter + 1
      endwhile
   endwhile
   output "Enter account number or ", QUIT, " to quit "
   input acctNum
return

finish()
   output "End of job"
	return
```

In order to do this, we must first fix the semantic, logic, and syntax issues with the pseudocode before we start writing the code.

```cpp
// A standard mortgage is paid monthly over 30 years.
// This program is intended to output 360 payment coupons
// for each new borrower at a mortgage company.
// Each coupon lists the month number, year number,
// and a friendly mailing reminder.

start

Declarations
num MONTHS = 12
num YEARS = 30
string MSG = "Remember to allow 5 days for mailing"
num acctNum
num yearCounter
num monthCounter
string QUIT = "QUIT"

housekeeping()

while acctNum <> QUIT
    printCoupons()
endwhile

finish()

stop

housekeeping()
while true
    print "Enter account number or ", QUIT, " to quit "
    input acctNum
    if acctNum is valid or acctNum = QUIT
        break
    else
        print "Invalid account number. Please try again."
    endif
endwhile
return

printCoupons()
yearCounter = 1
while yearCounter <= YEARS
    monthCounter = 1
    while monthCounter <= MONTHS
        print acctNum, monthCounter, yearCounter, MSG
        monthCounter = monthCounter + 1
    endwhile
    yearCounter = yearCounter + 1
endwhile
return

finish()
output "End of job"
return
```

## 👩‍💻 Line by Line Coding Walkthrough

Defining constants:

```cpp
const int MONTHS = 12;
const int YEARS = 30;
const string MSG = "Remember to allow 5 days for mailing";
const string QUIT = "QUIT";

```

These constants are defined as per the pseudocode. Using constants helps to avoid magic numbers in the code and makes it more maintainable. If the values need to be changed in the future, they can be modified in one place.

Function prototypes:

```cpp
void housekeeping(string& acctNum);
void printCoupons(const string& acctNum);
void finish();

```

Function prototypes are declarations of the functions that are defined later in the code. They specify the return type, function name, and parameter types. Prototypes are required when functions are defined after the `main()` function to avoid compiler errors.

`main()` function:

```cpp
int main() {
    string acctNum;

    while (true) {
        housekeeping(acctNum);

        if (acctNum == QUIT) {
            break;
        }

        printCoupons(acctNum);
    }

    finish();

    return 0;
}

```

 The `main()` function is the entry point of the program. It declares the `acctNum` variable to store the account number. A `while` loop is used to repeatedly call the `housekeeping()` function until the user enters `QUIT`. If the account number is not `QUIT`, the `printCoupons()` function is called to print the payment coupons. After the loop ends, the `finish()` function is called to print the end message.

`housekeeping()` function:

```cpp
void housekeeping(string& acctNum) {
    while (true) {
        cout << "Enter account number or " << QUIT << " to quit: ";
        cin >> acctNum;

        if (!acctNum.empty() || acctNum == QUIT) {
            break;
        } else {
            cout << "Invalid account number. Please try again." << endl;
        }
    }
}

```

The `housekeeping()` function prompts the user to enter an account number or `QUIT` to quit. It uses a `while` loop to validate the input. If the account number is not empty or is equal to `QUIT`, the loop breaks. Otherwise, an error message is displayed, and the user is prompted again. The `acctNum` parameter is passed by reference to allow the function to modify its value.

`printCoupons()` function:

```cpp
void printCoupons(const string& acctNum) {
    int yearCounter = 1;

    while (yearCounter <= YEARS) {
        int monthCounter = 1;

        while (monthCounter <= MONTHS) {
            cout << "Account: " << acctNum << ", Month: " << monthCounter
                 << ", Year: " << yearCounter << ", " << MSG << endl;
            monthCounter++;
        }

        yearCounter++;
    }
}

```

 The `printCoupons()` function uses nested `while` loops to iterate over the years and months. It prints the account number, month, year, and the mailing reminder for each coupon. The `acctNum` parameter is passed by const reference to avoid unnecessary copying and to indicate that the function does not modify the account number.

`finish()` function:

```cpp
void finish() {
    cout << "End of job" << endl;
}

```

The `finish()` function simply prints the end message indicating the completion of the job.

These explanations should help a student understand the purpose and reasoning behind each part of the C++ script. Let me know if you have any further questions!

## 💻 Final Code

```cpp
// A standard mortgage is paid monthly over 30 years.
// This program is intended to output 360 payment coupons
// for each new borrower at a mortgage company.
// Each coupon lists the month number, year number,
// and a friendly mailing reminder.

#include <iostream>
#include <string>

using namespace std;

const int MONTHS = 12;
const int YEARS = 30;
const string MSG = "Remember to allow 5 days for mailing";
const string QUIT = "QUIT";

void housekeeping(string& acctNum);
void printCoupons(const string& acctNum);
void finish();

int main() {
    string acctNum;

    while (true) {
        housekeeping(acctNum);

        if (acctNum == QUIT) {
            break;
        }

        printCoupons(acctNum);
    }

    finish();

    return 0;
}

void housekeeping(string& acctNum) {
    while (true) {
        cout << "Enter account number or " << QUIT << " to quit: ";
        cin >> acctNum;

        if (!acctNum.empty() || acctNum == QUIT) {
            break;
        } else {
            cout << "Invalid account number. Please try again." << endl;
        }
    }
}

void printCoupons(const string& acctNum) {
    int yearCounter = 1;

    while (yearCounter <= YEARS) {
        int monthCounter = 1;

        while (monthCounter <= MONTHS) {
            cout << "Account: " << acctNum << ", Month: " << monthCounter
                 << ", Year: " << yearCounter << ", " << MSG << endl;
            monthCounter++;
        }

        yearCounter++;
    }
}

void finish() {
    cout << "End of job" << endl;
}
```

### 🤠 Output

```cpp
Enter account number or QUIT to quit: 566888             
Account: 566888, Month: 1, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 1, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 2, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 3, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 4, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 5, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 6, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 7, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 8, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 9, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 10, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 11, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 12, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 13, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 14, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 15, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 16, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 17, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 18, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 19, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 20, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 21, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 22, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 23, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 24, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 25, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 26, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 27, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 28, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 29, Remember to allow 5 days for mailing
Account: 566888, Month: 1, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 2, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 3, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 4, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 5, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 6, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 7, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 8, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 9, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 10, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 11, Year: 30, Remember to allow 5 days for mailing
Account: 566888, Month: 12, Year: 30, Remember to allow 5 days for mailing
Enter account number or QUIT to quit: QUIT 
End of job
