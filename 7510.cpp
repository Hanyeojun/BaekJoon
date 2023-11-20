#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int t, arr[3];
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << "Scenario #" << i << ":" << '\n';
        if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1]) {
            cout << "yes" << '\n';
        } else
            cout << "no" << '\n';
        cout << '\n';
    }
}