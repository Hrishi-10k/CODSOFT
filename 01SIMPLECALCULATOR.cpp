// Internship [CodSoft]
// Task - 02 [SIMPLE CALCULATOR]
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform*/
#include <iostream>
using namespace std;
int main() {
    double n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    char Operator;
    cout << "Enter Arithematic Operator :";
    cin >> Operator;
    switch(Operator) {
        case '+':
            cout << n1 <<Operator<< n2<<"="<< n1 + n2 << endl;
            break;
        case '-':
            cout << n1 <<Operator<< n2<<"="<< n1 - n2 << endl;
            break;
        case '*':
            cout << n1 <<Operator<< n2<<"="<< n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << n1 <<Operator<< n2<<"="<< n1 / n2 << endl;
            } else {
                cout << "Something Went Wrong, Check the digits" << endl;
            }
            break;
        default:
            cout << "Invalid Operator selected!" << endl;
    }
    return 0;
}
// C++ Programming
// Code by Hrishi Dahake