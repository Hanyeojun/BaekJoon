#include <iostream>
using namespace std;
int cnt[10];
int main() {
    int n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        cnt[n]++;
    }
    for (int i = 0; i < 10; i++) {
        if (cnt[i] % 2 == 1) {
            cout << i;
            break;
        }
    }
}