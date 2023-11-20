#include <algorithm>
#include <iostream>
using namespace std;
int arr[100001], dst[100001];
int GCD(int a, int b) {
    int n = a % b;
    while (n != 0) {
        a = b;
        b = n;
        n = a % b;
    }
    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, gcd = 0, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {  // 입력
        cin >> arr[i];
    }
    sort(arr, arr + n);                // 정렬
    for (int i = 0; i < n - 1; i++) {  // 가로수 사이 거리 계산
        dst[i] = arr[i + 1] - arr[i];
    }
    for (int i = 0; i < n - 1; i++) {  // 최대공약수 계산
        gcd = GCD(gcd, dst[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        cnt += dst[i] / gcd - 1;
    }
    cout << cnt;
}