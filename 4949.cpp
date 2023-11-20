#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        string str;
        stack<char>k;
        bool flag = true;
        getline(cin, str);
        if (str == ".") break;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[') k.push(str[i]);
            else if (str[i] == ')') {
                if (!k.empty() && k.top() == '(') k.pop();
                else {
                    flag = false;
                    break;
                }
            }
            else if (str[i] == ']') {
                if (!k.empty() && k.top() == '[') k.pop();
                else {
                    flag = false;
                    break;
                }
            }
            else if (str[i] == '.') break;
        }
        if (k.empty() && flag) cout << "yes\n";
        else cout << "no\n";
    }
} 