#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        double res = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int c;
            double g;
            cin >> c >> g;
            sum += c;
            res += c * g;
        }
        cout << sum << " ";
        cout << fixed;
        cout.precision(1);
        cout << res / sum << '\n';
    }
}