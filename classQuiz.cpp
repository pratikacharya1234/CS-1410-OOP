#include <iostream>
using namespace std;

int main() {
    cout << "Enter a score (-1 to end): ";
    int score;
    cin >> score;
    int total = 0;
    int count = 0;
    while (score != -1) {
        total += score;
        count++;
        cout << "Enter a score (-1 to end): ";
        cin >> score;
    }
    if (count > 0) {
        double average = static_cast<double>(total) / count;
        cout << "Average score: " << average << endl;
    } else {
        cout << "No scores were entered." << endl;
    }
    return 0;
}