#include <iostream>
#include <string>
using namespace std;


float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology) {
    return (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5.0;
}


std::string calculateGrade(float average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B+";
    } else if (average >= 60) {
        return "B";
    } else if (average >= 50) {
        return "C";
    } else if (average >= 40) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
   string studentName;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;

    
      cout << "Enter student name: ";
   cin >> studentName;
    cout << "Enter marks for English: ";
   cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
   cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
  cout << "Enter marks for Social Science: ";
   cin >> marksSocialScience;
   cout << "Enter marks for Biology: ";
    cin >> marksBiology;


    float average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);

   
    float totalMarks = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology;

   
    float percentage = (totalMarks / 500.0) * 100.0;

  
    string grade = calculateGrade(percentage);

   
   cout << "Student Name: " << studentName << endl;
   cout << "Percentage: " << percentage << "%" << endl;
   cout << "Grade: " << grade <<endl;

    return 0;
}