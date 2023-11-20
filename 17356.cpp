#include <cmath>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    double a, b, m;
    cin >> a >> b;
    m = (b - a) / 400.0;
    cout << fixed;
    cout.precision(20);
    cout << 1 / (1 + pow(10, m));
}