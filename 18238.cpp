#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    int cnt1 = 0, cnt2 = 0, ans = 0;
    char a = 'A';
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        cnt1 = abs(str[i] - a);  // 목표-현재 문자의 길이
        cnt2 = 26 - cnt1;        // 반대 방향
        ans += min(cnt1, cnt2);  // 작은 값 누적
        a = str[i];              // 위치 이동
    }
    cout << ans;
}