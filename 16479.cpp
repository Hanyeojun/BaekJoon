#include <iostream>
using namespace std;
int main() {
    int k, d1, d2;
    cin >> k >> d1 >> d2;
    if (d1 == d2)
        cout << k * k << '\n';
    else {
        double tmp = (double)(d1 - d2) / 2;
        cout << fixed;
        cout.precision(6);
        cout << k * k - tmp * tmp << '\n';
    }
}