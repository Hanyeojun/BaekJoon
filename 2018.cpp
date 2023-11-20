#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, left = 1, right = 1, res = 0, sum = 0;
    cin >> n;
    while (left <= right && right <= n) {
        if (sum < n) {
            sum += right;
            right++;
        } else if (sum > n) {
            sum -= left;
            left++;
        } else {
            res++;
            sum += right;
            right++;
        }
    }
    cout << res + 1;
}