#include <iostream>
using namespace std;
int main() {
    int arr[4] = {0};
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    int x, y, z, ans = 0;
    cin >> x >> y >> z;
    for (int i = 0; i < 4; i++) {
        if (arr[i] == x) ans = i + 1;
    }
    cout << ans;
}