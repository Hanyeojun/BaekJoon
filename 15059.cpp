#include <iostream>
using namespace std;
int main() {
    int inp[3] = {0}, od[3] = {0}, ans = 0;
    for (int i = 0; i < 3; i++) {
        cin >> inp[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> od[i];
    }
    for (int i = 0; i < 3; i++) {
        if (inp[i] < od[i]) ans += od[i] - inp[i];
    }
    cout << ans;
}