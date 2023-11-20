#include <iostream>
using namespace std;
int main() {
    double a, b, tmp;
    cin >> a;
    while (1) {
        cin >> b;
        if (b == 999) break;
        cout << fixed;
        cout.precision(2);
        cout << b - a << '\n';
        a = b;
    }
}