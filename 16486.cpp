#include <iostream>
using namespace std;
int main() {
    double d1, d2, pi = 3.141592;
    cin >> d1 >> d2;
    cout << fixed;
    cout.precision(6);
    cout << (2 * pi * d2) + (2 * d1);
}