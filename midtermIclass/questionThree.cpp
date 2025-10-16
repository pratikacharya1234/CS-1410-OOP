#include <iostream>
#include <iomanip>
// #include <cmath>
using namespace std;

int main() {
    double A, B, C, R;
    
    cout << "Enter the value of A: ";
    cin >> A;
    
    cout << "Enter the value of B: ";
    cin >> B;
    
    cout << "Enter the value of C: ";
    cin >> C;
    
    if (A == 0 || B == 0 || C == 0) {
        cout << "Error: None of the variables A, B, or C can be zero!" << endl;
        return 1;
    }
    

    R = (A*A + B*B + C*C) / (A * B * C);
    // R = pow(A + B + C) / ( A * B * C);
    cout << fixed << setprecision(5);
    cout << "The computed value of R is: " << R << endl;
    
    return 0;
}