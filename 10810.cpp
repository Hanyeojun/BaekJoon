#include <iostream>
using namespace std;
int arr[100];
int main() {
    int n, m;
    cin >> n >> m;
    int x, y, z, cnt = 0;
    while (m--) {
        cin >> x >> y >> z;
        for (int i = x; i <= y; i++) {
            arr[i] = z;
        }
    }
    for (int i = 1; i <= n; i++) {
        cnt = 0;
        cout << arr[i] << " ";
    }
}