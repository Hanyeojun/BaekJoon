#include <iostream>
using namespace std;
int main() {
    int n, ans = 1;
    cin >> n;
    while (n--) {
        ans *= 2;
    }
    cout << ans;
}