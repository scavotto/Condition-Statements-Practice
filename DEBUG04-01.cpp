// This pseudocode should create a report that contains an  
// apartment complex rental agent's commission. The
// program accepts the ID number and name of the agent who
// rented the apartment, and the number of bedrooms in the  
// apartment. 

#include <iostream>;
using namespace std;

// Declarations
int salesPersonID;
string salesPersonName;

const double numBedrooms;
const double COMM_3 = 100.00;
const double COMM_2 = 75.00;
const double COMM_1 = 55.00;
const double COMM_STUDIO = 30.00;
int QUIT = 9999;

int commisionEarned;

int main(); {

//Function Prototypes
    getReady();

    while (salesPersonID != QUIT) {
        detailLoop();
            endwhile
            finish()
        // stop 
        }
             
}
    void getReady() {
    cout << "Enter salesperson ID or " << QUIT << " to quit ";
    cin >> salesPersonID;
        return
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
            commissionEarned = COMM_STUDIO
        }   
        cout << salesPersonID << salesPersonName << commissionEarned;

        cout << "Enter salesperson ID or " << QUIT << " to quit ";
        cin >> salesPersonID;
        return
        

    }
   
   
finish()
   output "End of report"
   return