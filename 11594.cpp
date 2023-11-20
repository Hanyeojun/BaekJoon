#include <iostream>
using namespace std;
int main() {
    int t, cnt = 0;
    cin >> t;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        if (t == n) {
            cnt++;
        }
    }
    cout << cnt;
}