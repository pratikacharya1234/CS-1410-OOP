#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int  age;
    double inputValue;
    double discount = 0.0;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Enter Merchandise valu: " << endl;
    cin >> inputValue;

    if ( age > 65){
        discount = inputValue * 0.25;
        cout << "You are eligible for senior Citizen discount for 25% "  << endl;
    }
    else {
        discount = inputValue * 0.15;
        cout << "You are not  eligible for Senior Citizen discount for 15% " << endl;
    }
    inputValue -= discount;
    cout << "Total Amt" << inputValue << endl;
    return 0;
}