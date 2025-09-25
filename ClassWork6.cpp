#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int input1, input2;
    char user;
    double result = 0;

    cout << "Select The Option" << endl;
    cout << "Select a for add" << endl;
    cout << "Select s for subtraction" << endl;
    cout << "Select m for multiply" << endl;
    cout << "Select d for division" << endl;

    cout << "Enter your choice: ";
    cin >> user;

    cout << "Enter input 1: ";
    cin >> input1;

    cout << "Enter input 2: ";
    cin >> input2;

    // Fixed conditional statements
    if(user == 'a' || user == 'A') {
        result = input1 + input2;
        cout << "Result: " << result << endl;
    }
    else if(user == 's' || user == 'S') {
        result = input1 - input2;
        cout << "Result: " << result << endl;
    }
    else if(user == 'm' || user == 'M') {
        result = input1 * input2;
        cout << "Result: " << result << endl;
    }
    else if(user == 'd' || user == 'D') {
        if(input2 != 0) {
            result = (double)input1 / input2;
            cout << "Result: " << result << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
    }
    else {
        cout << "Invalid choice! Please select a, s, m, or d." << endl;
    }
    return 0;
}