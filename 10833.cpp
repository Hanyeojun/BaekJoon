#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    while (n--) {
        int s, a;
        cin >> s >> a;
        sum += a % s;
    }
    cout << sum;
}