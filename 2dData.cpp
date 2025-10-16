/*
|-             -| 
|0     -1     22| row 0
|4      6      8| row 
|2      6     -5| row 2
|-             -|
col0  col1    col2
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matrix[3][3] = {
        {0, -1, 22},
        {4,  6,  8},
        {2,  6, -5}
    };
    
    int rows = 3;
    int cols = 3;
    
    cout << "Matrix:" << endl;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << setw(4) << matrix[row][col] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     int arr[3][4];  
//     cout << "Enter elements of the array:" << endl;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "\nCompute and print sum of each row:" << endl;
//     for (int i = 0; i < 3; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < 4; j++) {
//             rowSum += arr[i][j];
//         }
//         cout << "Sum of Row " << i << " = " << rowSum << endl;
//     }
//     cout << "\nCompute and print sum of each column:" << endl;
//     for (int j = 0; j < 4; j++) {
//         int colSum = 0;
//         for (int i = 0; i < 3; i++) {
//             colSum += arr[i][j];
//         }
//         cout << "Sum of Column " << j << " = " << colSum << endl;
//     }
//     int totalSum = 0;
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             totalSum += arr[i][j];
//         }
//     }
//     cout << "\nTotal Sum = " << totalSum << endl;
//     double average = totalSum / 12.0;
//     cout << "Average of all elements: = " << fixed << setprecision(2) << average << endl;
//     return 0;
// }