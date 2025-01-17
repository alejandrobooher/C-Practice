//**************************************************************
// Author: Alejandro Booher
// Date: 01.15.2025
// Description: Assignment 1
// Project Description: Create a program where the user can determine a student's final grade based on the percentage weight of assignment types.
//**************************************************************

#include <iostream>
#include <string>
using namespace std;

// Setting the constant variables. Used float instead of double to practice saving memory when I can.
const float HOMEWORK_WEIGHT = 0.55;
const float MIDTERM_WEIGHT = 0.20;
const float FINAL_WEIGHT = 0.25;

int main() {
    // Setting variables within the main function.
    string firstName, lastName;
    float homeworkAvg, midtermGrade, finalExamGrade, finalGrade;

    cout << "Student Grade Calculation Form \n \n";
    
    // This is where users input information.
    cout << "First Name: ";
    cin >> firstName;
    cout << "Last Name: ";
    cin >> lastName;
    cout << "Homework Average: ";
    cin >> homeworkAvg;
    cout << "Midterm Grade: ";
    cin >> midtermGrade;
    cout << "Final Exam Grade: ";
    cin >> finalExamGrade;

    // Multiplying the information provided by user by the constant variables.
    finalGrade = (homeworkAvg * HOMEWORK_WEIGHT) +
                 (midtermGrade * MIDTERM_WEIGHT) +
                 (finalExamGrade * FINAL_WEIGHT);

    // This is where the final output is.
    cout << "\nStudent: " << firstName << " " << lastName << endl;
    cout << "Completed the course with a final grade of: " << finalGrade << endl;

    return 0;
}


