#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    double a, b, c, ans;
    while(n--){
        cin >> a >> b >> c;
        ans = a * b * c;
        cout << fixed;
        cout.precision(2);
        cout << '$' << ans << '\n';
    }
}