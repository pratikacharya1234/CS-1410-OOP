#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int pattern [4][6] = {
        {1, 2, 0, 4, 5, 6},    
        {2, 3, 4, 0, 6, 7},    
        {3, 4, 5, 6, 0, 8},    
        {4, 5, 6, 7, 8, 0}     
    };

    int rows = 4;
    int cols = 6;

    cout << "Pattern:" << endl;
    for(int row = 0; row < rows; row++){  
        for (int col = 0; col < cols; col++){
            if(pattern[row][col] == 0){
                cout << setw(6) << "#" << " ";
            }
            else{
                cout << setw(6) << pattern[row][col] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
