//vector <int> scores = { 8,5,6,2,11} to {11, 2, 6, 5, 8}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> scores = { 8,5,6,2,11};
    sort(scores.begin(), scores.end(), greater<int>());
    reverse(scores.end(), scores.begin());    
    for (int score: scores){
        cout << score << " ";
    }
    cout << endl;
    return 0;
}
