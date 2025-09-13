#include <iostream>
#include <cmath>   // для sin, cos, sqrt

using namespace std;

int main() {
    double x, y, Y;

    cout << "Введи x: ";
    cin >> x;

    cout << "Введи y: ";
    cin >> y;

    if (x <= 0) {
        Y = x * x - sin(y);   // x^2 - sin(y)
    } else {
        Y = sqrt(x) + cos(y); // sqrt(x) + cos(y)
    }

    cout << "Результат Y = " << Y << endl;

    return 0;
}