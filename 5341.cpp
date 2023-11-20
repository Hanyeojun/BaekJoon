#include <iostream>
using namespace std;
int main() {
    while (1) {
        int t, sum = 0;
        cin >> t;
        if (!t) {
            break;
        }
        for (int i = 1; i <= t; i++) {
            sum += i;
        }
        cout << sum << '\n';
    }
}