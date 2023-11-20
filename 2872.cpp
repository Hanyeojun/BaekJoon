// 우리집엔 도서관이 있어
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = n;

    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == cnt) cnt--;
    }
    // 입력받은 책의 번호를 뒤에서부터 읽으면서 순서가 맞지 않는 책 개수 카운팅
    cout << cnt;
}