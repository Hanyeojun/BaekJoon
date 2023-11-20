// 오큰수
#include <string.h>

#include <iostream>
#include <stack>
using namespace std;

int arr[1000000];  // 입력
int ans[1000000];  // 결과
stack<int> tk;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    memset(ans, -1, sizeof(int) * n);  // 초기화

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // 스택에 top으로 갈수록 작도록 저장
    for (int i = n - 1; i >= 0; i--) {
        while (!tk.empty() && arr[i] >= tk.top()) {
            tk.pop();
        }
        // 스택이 비었다면 -1, 아니면 스택의 top을 저장
        if (!tk.empty()) {
            ans[i] = tk.top();
        }
        tk.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
}