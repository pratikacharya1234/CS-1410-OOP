#define _USE_MATH_DEFINES
/*
 * Program: Cone.cpp
 * Purpose: Calculate the volume and surface area of a right cone
 * Author: Pratik Acharya
 * Date: 09/13/2024
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define variables as type double
    double V, S, r, h;
    
    // Prompt for and read radius and height
    cout << "Enter radius: ";
    cin >> r;
    
    cout << "Enter height: ";
    cin >> h;
    
    // Calculate volume of a right cone
    // V = (1/3) * π * r² * h
    V = (1.0/3.0) * M_PI * r * r * h;
    
    // Calculate surface area of a right cone
    // S = π * r² + π * r * sqrt(r² + h²)
    S = M_PI * r * r + M_PI * r * sqrt(r * r + h * h);
    
    // Print the volume and surface area
    cout << "Volume = " << V << endl;
    cout << "Surface area = " << S << endl;
    
    return 0;
}