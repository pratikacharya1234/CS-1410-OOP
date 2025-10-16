#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }
        cout << char('A' + i - 1) << endl;
    }
    return 0;
}