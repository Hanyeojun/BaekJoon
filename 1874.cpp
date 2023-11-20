#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<char> r;  // 정답
    stack<int> s;    // 입력
    int n, t = 0;
    bool flag = 1;

    cin >> n;
    // top을 사용하기 위해서 0값 삽입
    s.push(t++);  // 들어가자마자 0 push 후 t 1 증가
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;              // 수열 값 입력
        while (s.top() < x) {  // 스택의 top보다 입력된 수열 값이 작으면
            s.push(t++);       // 스택에 t++ push
            r.push_back('+');  // push했으므로 벡터 r에 '+' push
        }
        if (s.top() == x) {    // top과 입력 수열 값이 같으면
            s.pop();           // top에 있는 값 pop
            r.push_back('-');  // pop했으므로 벡터 r에 '-' push
        } else {
            flag = 0;  // 입력된 수열을 만들지 못하는 경우 flag = 0
            break;
        }
    }
    if (flag) {
        for (int i = 0; i < r.size(); i++) {
            cout << r[i] << '\n';
        }
    } else
        cout << "NO";
}