#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 4.0;
    double b = 0.5;
    double F = 0.5;

    double y = (0.75 - 5 * a) * sin(b - F);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "y = f(a, b) = " << y << endl;

    return 0;
}