#include <iostream>
using namespace std;
int main() {
    int arr[5] = {0};
    int n = 1;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    while (1) {
        int cnt = 0;
        for (int i = 0; i < 5; i++) {
            if (n % arr[i] == 0) {
                cnt++;
            }
        }
        if (cnt >= 3) break;
        n++;
    }
    cout << n;
}