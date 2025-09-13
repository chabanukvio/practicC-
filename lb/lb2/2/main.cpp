#include <iostream>
using namespace std;

int main() {

    double x, y;
    cout<<"Enter point coordinates (x y): ";
    cin>>x>>y;

    if (x >= 0 && x <= 2 && y >= 0 && y <= 1) {
        cout <<"Point is inside the shaded area" << endl;
    } else {
        cout <<"Point is outside the shaded area" << endl;
    }
    return 0;
}