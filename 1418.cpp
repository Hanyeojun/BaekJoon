#include <algorithm>
#include <iostream>
using namespace std;
int prime[100001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int kcnt = 0, num;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= n; j += i) {
            prime[j] = max(prime[j], i);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (prime[i] <= k) kcnt++;
    }
    cout << kcnt;
}