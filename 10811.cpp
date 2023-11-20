#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int arr[101] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    while (m--) {
        int s, e;
        cin >> s >> e;
        reverse(arr + s - 1, arr + e);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}