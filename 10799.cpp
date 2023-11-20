// 쇠막대기
#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<char> st;
    int sum = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {  // 레이저 or 막대의 시작
            st.push(str[i]);
        } else if (str[i] == ')') {
            if (str[i - 1] == '(') {         // 레이저일 때
                st.pop();                    // pop하고
                sum += st.size();            // 스택의 size = 막대 개수
            } else if (str[i - 1] == ')') {  // 막대의 끝일 때
                st.pop();                    // pop하고
                sum++;                       // 개수 1 증가
            }
        }
    }
    cout << sum;
}