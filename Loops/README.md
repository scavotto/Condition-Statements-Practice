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
