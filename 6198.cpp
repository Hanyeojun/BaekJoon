// 옥상 정원 꾸미기. monotone stack 알고리즘
#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    long long ans = 0;
    stack<int> st;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        while (!st.empty() && st.top() <= t) {  // 현재 수보다 큰 수만 남겨둠
            st.pop();
        }
        ans += st.size();  // 자신보다 큰 수가 자신을 바라볼 수 있는 수
        st.push(t);
    }
    cout << ans;
}