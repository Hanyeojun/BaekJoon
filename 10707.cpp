#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;

    int ansX = p * a;
    int ansY = 0;
    if (p <= c)
        ansY = b;
    else
        ansY = b + d * (p - c);

    if (ansX < ansY)
        cout << ansX;
    else
        cout << ansY;
}