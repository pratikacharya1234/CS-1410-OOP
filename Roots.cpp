/*
 * Program: Roots.cpp
 * Purpose: Calculate the roots of a quadratic equation using the quadratic formula
 * Author: Pratik Acharya
 * Date: 09/13/2024
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define variables as type double
    double a, b, c, x1, x2;
    
    // Prompt for and read coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    
    cout << "Enter coefficient b: ";
    cin >> b;
    
    cout << "Enter coefficient c: ";
    cin >> c;
    
    // Calculate the two roots using the quadratic formula
    // x1 = (-b + sqrt(b² - 4ac)) / (2a)
    // x2 = (-b - sqrt(b² - 4ac)) / (2a)
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    // Print the two roots
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    
    return 0;
}