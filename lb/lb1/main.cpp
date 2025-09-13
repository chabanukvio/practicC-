#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 2, b = 13.17;
    double X = 0.5 * log((1 - cos((a / b) * M_PI)) / (1 + cos((a / b) * M_PI)));
    double Y = 0.3 * log((1 - sin((b / a) * M_PI)) / (1 + sin((b / a) * M_PI)));
    double S = X + Y + M_E;
    double y = pow(S, 1.0 / M_E);

    cout << "y = " << y << endl;
    return 0;
}