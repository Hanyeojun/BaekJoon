#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		stack<char>k;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(') k.push('(');
			else if(s[i]==')'){
				if (k.empty()) k.push(')');
				else if (k.top() == '(') k.pop();
			}
		}
		if (k.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
}