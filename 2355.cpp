#include <iostream>
using namespace std;
int main() {
    long long a, b;
    long long sum = 0;
    cin >> a >> b;
    if (a < b)
        sum = (b * (b + 1)) / 2 - (a * (a - 1)) / 2;
    else
        sum = (a * (a + 1)) / 2 - (b * (b - 1)) / 2;
    cout << sum << '\n';
}