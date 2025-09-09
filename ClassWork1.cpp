/*
Demo for Data Types in C++
int char float double long long C-string (later)
*/

#include <iostream>
using namespace std;

int main(){

    int intVal;
    intVal = 5000000;


    double gpa = 3.49;

    cout << "Integer Val: " << intVal << "real value: " << gpa << endl;

    char yesOrNo; // only one character can be accomodated
    yesOrNo = 'Y';
    cout << "Wanna take breake dowg?: " << yesOrNo << endl;
    char myName[] = "dwog"; // "dwog" completely incorrect syntax error in c++

    bool want2count;
    want2count = true; // or false
    cout << "\nWanna count?: " << want2count << endl;
    want2count = false;
    cout << "\nWanna count?: " << want2count << endl;
}