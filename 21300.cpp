#include <iostream>
using namespace std;
int main() {
    int t, sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> t;
        sum += t;
    }
    cout << sum * 5;
}