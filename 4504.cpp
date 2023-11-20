#include <iostream>
using namespace std;
int main() {
    int n, t;
    cin >> n;
    while (1) {
        cin >> t;
        if (t == 0) break;
        if (!(t % n))
            cout << t << " is a multiple of " << n << '.' << '\n';
        else
            cout << t << " is NOT a multiple of " << n << '.' << '\n';
    }
}