#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[3][4];  
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "\nCompute and print sum of each row:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 4; j++) {
            rowSum += arr[i][j];
        }
        cout << "Sum of Row " << i << " : " << rowSum << endl;
    }
    cout << "\nCompute and print sum of each column:" << endl;
    for (int j = 0; j < 4; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of Column " << j << " : " << colSum << endl;
    }
    cout << " Sum of all: " <<  endl;
    int totalSum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            totalSum += arr[i][j];
        }
    }
    cout << "\nTotal Sum = " << totalSum << endl;
    double average = totalSum / 12.0;
    cout << "Average of all elements: " << fixed << average << endl;
    return 0;
}