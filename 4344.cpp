#include <iostream>
using namespace std;

int main() {
    int c, n, cnt;
    int avg;
    int arr[1000] = {0};
    double res;

    cin >> c;
    while (c--) {
        avg = 0;
        cnt = 0;
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            avg = avg + arr[j];
        }
        avg = avg / n;
        for (int j = 0; j < n; j++) {
            if (arr[j] > avg) cnt++;
        }
        res = (double)cnt / n * 100;

        cout << fixed;
        cout.precision(3);
        cout << res << '%' << '\n';
    }
}