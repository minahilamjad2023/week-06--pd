#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char serviceCode, callTime;
    int minutesUsed;

    
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
   cin >> serviceCode;

    
    serviceCode = toupper(serviceCode);

    
    if (serviceCode != 'R' && serviceCode != 'P') {
       cout << "Invalid service code. Please enter R/r for regular or P/p for premium." <<endl;
        return 1;
    }

    
    if (serviceCode == 'P') {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> callTime;
        callTime =toupper(callTime);

        if (callTime != 'D' && callTime != 'N') {
           cout << "Invalid call time. Please enter D/d for day or N/n for night." << endl;
            return 1; 
        }
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;

    double totalCost = 0.0;

    
    if (serviceCode == 'R') { 
        if (minutesUsed <= 50) {
            totalCost = 10.0;
        } else {
            totalCost = 10.0 + 0.20 * (minutesUsed - 50);
        }
    } else if (serviceCode == 'P') { 
        if (callTime == 'D') { 
            if (minutesUsed <= 75) {
                totalCost = 25.0;
            } else {
                totalCost = 25.0 + 0.10 * (minutesUsed - 75);
            }
        } else if (callTime == 'N') { 
            if (minutesUsed <= 100) {
                totalCost = 25.0;
            } else {
                totalCost = 25.0 + 0.05 * (minutesUsed - 100);
            }
        }
    }

    
    cout << "Service Type: " << (serviceCode == 'R' ? "Regular" : "Premium") << endl;
    cout << "Total Minutes Used: " << minutesUsed << " minutes" <<endl;
    cout << "Amount Due: $" << totalCost <<endl;

    return 0;
}