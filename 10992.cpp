#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int l = n - 1, r = n - 1;

    for (int i = 0; i < l; i++) {
        cout << ' ';
    }
    cout << "*\n";
    l--;
    r++;

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < l; j++) {
            cout << ' ';
        }
        cout << '*';
        for (int j = l + 1; j < r; j++) {
            cout << ' ';
        }
        cout << "*\n";
        l--;
        r++;
    }
    if (n > 1) {
        for (int i = l; i <= r; i++) {
            cout << '*';
        }
    }
}