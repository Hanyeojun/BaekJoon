#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        double p;
        cin >> p;
        cout << fixed;
        cout.precision(2);
        cout << "$" << p * 0.8 << '\n';
    }
}