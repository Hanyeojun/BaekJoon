#include <iostream>
using namespace std;
int arr[5000001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            continue;
        else {
            cnt++;
        }
    }
    cout << cnt;
}