#include <iostream>
#include <cmath>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int weekends) {
    int value;
    int a;

    if (yearType == "leap") {
        holidays = holidays * 0.67;
        weekends = weekends * 0.75;
        value = holidays + weekends;
        a = 48 - 48 * 0.15;
        a = a + value + 1;
    } else {
        double holidaysNormal = holidays * 0.67;
        double weekendsNormal = weekends * 0.75;
        value = holidaysNormal + weekendsNormal;
        a = 48 - 48 * 0.15;
        a = a + value;
       
if (a >= 44) {
    a += 1; 
} else {
    a = 44; 
}


a -= 6; 


if (a < 0) {
    a = 0;
}
  }
    return a;
}

int main() {
    string yearType;
    int holidays, weekends;

    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter number of holidays: ";
    cin >> holidays;

    cout << "Enter number of weekends: ";
    cin >> weekends;

    int result = calculateVolleyballGames(yearType, holidays, weekends);
    cout << result << endl;

    return 0;
}