#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    cout << "Gnomes:\n";
    while (t--) {
        int arr[3] = {0};
        for (int i = 0; i < 3; i++) cin >> arr[i];
        if ((arr[1] - arr[0]) * (arr[2] - arr[1]) > 0)
            cout << "Ordered\n";
        else
            cout << "Unordered\n";
    }
}