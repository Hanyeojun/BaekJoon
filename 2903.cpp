#include <iostream>
using namespace std;
int main() {
    int n, a = 2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a += (a - 1);
    }
    a *= a;
    cout << a;
}