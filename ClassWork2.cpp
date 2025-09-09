#include <iostream>
#include <cmath>

using namespace std;

int main(){

    
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    cout <<"\n Enter the cordinate of points 1";
    cin >> x1 >> y1;

    cout <<"\n Enter the cordinate of points 2";
    cin >> x2 >> y2;

    double distance = 0;
    int xdiff = x2 - x1;
    int ydiff = y2 - y1;

    distance = sqrt(((xdiff * xdiff) + (ydiff * ydiff)));
    cout << "\n distance between point ( " << x1 << "," <<y1<< " ) and  (";
    cout  << x2 << " ," << y2 << ") is: " << distance << endl;
    cout << endl;

    return 0;


}