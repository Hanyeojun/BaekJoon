#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int Eureka(int n) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int h = 0; h < v.size(); h++) {
                if (v[i] + v[j] + v[h] == n) return 1;
            }
        }
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, k;
    cin >> t;
    for (int i = 1; i * (i + 1) / 2 < 1000; i++) {
        v.push_back(i * (i + 1) / 2);
    }

    while (t--) {
        cin >> k;
        cout << Eureka(k) << '\n';
    }
}