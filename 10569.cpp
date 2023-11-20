#include <iostream>
using namespace std;
int main() {
    int t, v, e;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        cout << abs(v - e - 2) << '\n';
    }
}