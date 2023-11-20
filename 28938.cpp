#include <iostream>
using namespace std;
int main() {
    int n, t, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        s += t;
    }
    if (s > 0)
        cout << "Right";
    else if (s == 0)
        cout << "Stay";
    else
        cout << "Left";
}