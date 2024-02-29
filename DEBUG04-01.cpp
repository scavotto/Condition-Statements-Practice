// This C++ code calculates an apartment rental agent's commission

#include <iostream>
using namespace std;

// Declarations  
int salesPersonID;
string salesPersonName;
double numBedrooms;
const double COMM_3 = 100.00;
const double COMM_2 = 75.00;
const double COMM_1 = 55.00;
const double COMM_STUDIO = 30.00;
int QUIT = 9999;
double commissionEarned;

int main() {

    // Function calls
    getReady();

    while (salesPersonID != QUIT) {
        detailLoop();
    }

    finish();

    return 0;
}

void getReady() {

    cout << "Enter salesperson ID or " << QUIT << " to quit ";
    cin >> salesPersonID;

    return;

}

void detailLoop() {

    cout << "Enter name ";
    cin >> salesPersonName;

    cout << "Enter number of bedrooms rented ";
    cin >> numBedrooms;

    if (numBedrooms == 3) {
        commissionEarned = COMM_3;
    }
    else if (numBedrooms == 2) {
        commissionEarned = COMM_2;
    }
    else if (numBedrooms == 1) {
        commissionEarned = COMM_1;
    }
    else {
        commissionEarned = COMM_STUDIO;
    }

    cout << salesPersonID << " " << salesPersonName << " " << commissionEarned;

    cout << "Enter salesperson ID or " << QUIT << " to quit ";
    cin >> salesPersonID;

    return;

}

void finish() {

    cout << "End of report";

}