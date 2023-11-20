// 스택2
#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t == 1) {
            cin >> num;
            st.push(num);
        } else if (t == 2) {
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if (t == 3) {
            cout << st.size() << '\n';
        } else if (t == 4) {
            if (st.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else if (t == 5) {
            if (st.empty())
                cout << -1 << '\n';
            else
                cout << st.top() << '\n';
        }
    }
}