#include <iostream>
#include <string>
using namespace std;

string formatTime(int hours, int minutes, string beforeOrAfter) {
    return to_string(hours) + ":" + to_string(minutes) + " hours " + beforeOrAfter + " the start";
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) 
{
    int examTime = examHour * 60 + examMinute;
    int studentTime = studentHour * 60 + studentMinute;
    int timeDifference = studentTime - examTime;

    if (timeDifference < 0) {
        return "Early\n" + formatTime(-timeDifference / 60, -timeDifference % 60, "before");
    } else if (timeDifference == 0) {
        return "On time";
    } else {
        return "Late\n" + formatTime(timeDifference / 60, timeDifference % 60, "after");
    }
}

int main() {
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;

    string status = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << status << endl;

    return 0;
}