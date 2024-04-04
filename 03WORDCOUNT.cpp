// Internship [CodSoft]
// Task - 4 [WORD COUNT]
/* Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string fname; //File Name
    int count = 0;
    cout << "Enter the File Name: ";
    cin >> fname; 
    ifstream file(fname) ;
    string word;
    while (file >> word) {
        count++;
    }
    cout << "No of Words: " << count << endl;
    return 0;
}
// C++ Programming
// Code by Hrishi Dahake