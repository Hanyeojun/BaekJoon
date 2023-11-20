#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int t = 0;

    if (a < 0)
        cout << -a * c + d + b * e;
    else
        cout << (b - a) * e;
}