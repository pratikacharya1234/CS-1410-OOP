#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers(5);
    cout << "5 integers: " << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}