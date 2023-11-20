// 도키도키 간식드리미. 스택
#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> tk;
    int n, t, cnt = 1;
    cin >> n;

    while (n--) {
        cin >> t;

        if (t == cnt) {
            cnt++;
        } else {
            tk.push(t);
        }

        while (!tk.empty() && tk.top() == cnt) {
            tk.pop();
            cnt++;
        }
    }
    if (tk.empty())
        cout << "Nice";
    else
        cout << "Sad";
}