#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    double n, p;
    cin >> n >> p;
    double res = p;
    if (n >= 20)
        res = min(res, p * 0.75);
    else if (n >= 10)
        res = min(res, p * 0.9);
    if (n >= 15)
        res = min(res, p - 2000);
    else if (n >= 5)
        res = min(res, p - 500);
    cout << max(0.0, res);
}