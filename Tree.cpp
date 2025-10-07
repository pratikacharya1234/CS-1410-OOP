/*
 * Tree.cpp
 * This program draws a pine tree on the console using ASCII characters.
 * The user inputs the height of the cone, and the program draws the tree
 * with a cone and trunk.
 * 
 * Author: Pratik Acharya
 * Date: October 5, 2023
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;
    
    cout << "How tall should the tree be?: ";
    cin >> height;
    
    if (height < 3 || height > 15) {
        cout << "Error: Height must be between 3 and 15." << endl;
        return 1;
    }
    
    for (int row = 0; row < height; row++) {
        for (int spaces = 0; spaces < height - row - 1; spaces++) {
            cout << " ";
        }
        
        cout << "/";
        
        for (int middle = 0; middle < 2 * row; middle++) {
            cout << " ";
        }
        
        cout << "\\";
        
        cout << endl;
    }
    
    for (int i = 0; i < 2 * height; i++) {
        cout << "-";
    }
    cout << endl;
    
    int trunkHeight = height / 2;
    
    for (int row = 0; row < trunkHeight; row++) {
        for (int spaces = 0; spaces < height - 1; spaces++) {
            cout << " ";
        }
        
        // Print trunk
        cout << "||" << endl;
    }
    
    return 0;
}