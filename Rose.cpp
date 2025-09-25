// output /
//       /
//      /

#include <iostream>
using namespace std;

int main(){
    const int ROWS = 3;
    const int COLS = 4;
    char flower[ROWS][COLS] = { {' ', ' ', '/'},
                                {' ', '/' },
                                {'/',} };
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            cout << flower[i][j];
        }
        cout << endl;
    }
    return 0;
}
