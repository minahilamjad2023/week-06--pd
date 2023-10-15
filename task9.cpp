#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y)
 {
    
    if( x >= 0 && x <= 3* h)
    {
        if ( y == 0 || y == h)
        return "Border"; 
    }

    if ( y >= 0 && y <= 4 * h )
    {
        if ( x == 0 || x == 2 * h )
        return "Border";
    }
    if ( x == h  && y >= h &&  y <= 3 * h )
    return "Border";
    
    else if ( x > 0 && x < 2 * h  && y > 0 && y < 4 * h )
     return "Inside";

     else 
     return "Outside";
}

int main() {
    int h, x, y;

    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    string position = checkPointPosition(h, x, y);
    cout << position <<endl;

    return 0;
}