#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = min(a, b / 2 + c);
    cout << ans;
}