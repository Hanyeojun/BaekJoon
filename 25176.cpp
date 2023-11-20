#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, v = 1;
    cin >> n;
    for (int i = n; i > 1; i--) {
        v *= i;
    }
    cout << v;
}