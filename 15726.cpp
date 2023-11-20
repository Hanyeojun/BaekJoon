#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    long long x = a * b / c;
    long long y = a / b * c;
    if (x > y)
        cout << x;
    else
        cout << y;
}