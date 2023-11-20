#include <cmath>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double l, s;
    cin >> l;
    s = sqrt(3) * 0.25 * l * l;
    cout << fixed;
    cout.precision(9);
    cout << s;
}