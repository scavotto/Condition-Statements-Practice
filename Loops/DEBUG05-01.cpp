// This program is supposed to display every fifth year
// starting with 2024; that is, 2024, 2029, 2034, 2039,
// and so on, for 30 years.

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