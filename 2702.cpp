#include <iostream>
using namespace std;
int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << '\n';
    }
}