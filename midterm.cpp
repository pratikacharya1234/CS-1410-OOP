//vector<int> scores = {8,5,6,2,11}
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int scors[] = { 8,5,6,2,11};
    
    vector<int> scores = {8,5,6,2,11};
    for ( int i = 0; i < scores.size() / 2; i++){
        int tampValue = scores.at(i);
        scores.at(i) = scores.at(scores.size() - 1 - i);
        scores.at(scores.size() - 1 - i);
    }

    cout << "\nAfter change: \n";
    for(int i =0; i < scores.size(); i++){
        cout << scores.at(i) << ", ";
    }

    return 0;
}
