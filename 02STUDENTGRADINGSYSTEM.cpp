// Internship [CodSoft]
// Task - 3 [STUDENT GRADING SYSTEM]
/*Create a program that manages student grades. Allow the user
to input student names and their corresponding grades.
Calculate the average grade and display it along with the highest
and lowest grades*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student 
{
    string n; //name
    double gr; //grade
};
int main() {
    vector<Student> students;
    int nostudents;
    cout << "Enter the total number of students: ";
    cin >> nostudents;
    // For loop for getting the Name of the students and their grades
    for (int i = 1; i <= nostudents; ++i) {
        Student student;
        cout << "Enter the Name of student " <<i<< ": "<<endl;
        cin >> student.n;
        cout << "Enter the Grade of student " <<i<< ": "<<endl;
        cin >> student.gr;
        students.push_back(student);
    }
    // Calculating the Average grade
    double sumofgrades = 0;
    for (const auto& student : students) {
        sumofgrades += student.gr;
    }
    double avg_grade = sumofgrades / nostudents;
    // Checking the highest and lowest grade
    double highest = students[0].gr;
    double lowest = students[0].gr;
    for (const auto& student : students) {
        highest = max(highest, student.gr);
        lowest = min(lowest, student.gr);
    }
    cout <<endl<< "Student Grades Summary:"<<endl;
    for (const auto& student : students) {
        cout << student.n << ": " << student.gr << endl;
    }
    cout << endl <<"Average Grade: " << avg_grade << endl;
    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;
    return 0;
}
// C++ Programming
// Code by Hrishi Dahake