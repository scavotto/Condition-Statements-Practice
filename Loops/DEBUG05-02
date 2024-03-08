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