#include <algorithm>
#include <iostream>
using namespace std;
int fruit[1000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        cin >> fruit[i];
    }
    sort(fruit, fruit + n);
    for (int i = 0; i < n; i++) {
        if (fruit[i] <= l) l++;
    }
    cout << l;
}