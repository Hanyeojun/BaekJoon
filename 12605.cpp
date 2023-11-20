#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string str, tmp = "", ans = "";
        stack<string> st;
        getline(cin, str);  // buffer clear
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == ' ') {
                st.push(tmp);
                st.push(" ");
                tmp = "";
            } else
                tmp += str[j];
        }
        st.push(tmp);
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        cout << "Case #" << i << ": " << ans << '\n';
    }
}