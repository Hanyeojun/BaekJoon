#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    int t;
    string str;
    stack<char> st;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, str);
        str += ' ';
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            } else
                st.push(str[i]);
        }
        cout << '\n';
    }
}