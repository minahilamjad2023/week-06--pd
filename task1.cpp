#include <iostream>
#include <string>
using namespace std;


string decideActivity(string temperature, string humidity) {
    if (temperature == "warm") {
        if (humidity == "dry") {
            return "Play tennis";
        } else if (humidity == "humid") {
            return "Swim";
        }
    } else if (temperature == "cold") {
        if (humidity == "dry") {
            return "Play basketball";
        } else if (humidity == "humid") {
            return "Watch TV";
        }
    }
    return "Unknown activity"; 
}

int main() {
    string temperature, humidity;

   
    cout << "Enter temperature (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;

 
    string recommendedActivity = decideActivity(temperature, humidity);

   
    cout << "Recommended activity: " << recommendedActivity << endl;

    return 0;
}