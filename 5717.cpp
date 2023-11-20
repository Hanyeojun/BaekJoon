#include <iostream>
using namespace std;
int main() {
    while (1) {
        int m, f;
        cin >> m >> f;
        if (!m && !f) break;
        cout << m + f << '\n';
    }
}