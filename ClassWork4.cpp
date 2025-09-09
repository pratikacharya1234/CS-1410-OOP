#include <iostream>

using namespace std;

int main(){
    //ascii
    char myChar = 'a';

    
    cout << "myChar is: " << myChar << ". It's integer value is: " << (int)myChar << endl;
    
    
    char myName[6] = 'pratik';
    cout << "\n My name is:" << myName << endl;

    string lastname = "Acharya";
    cout << "\n my last name is:" << lastname << endl;

    cout << "first and the last name" << myName << lastname << endl;
    cout << endl;
    return 0;

}