#include<iostream>
using namespace std;
int arr[10000] = { 0 };
int top = 0, sz = 0;
void Push() {
	int x;
	cin >> x;
	arr[++top] = x;
	sz++;
}
void Pop() {
	if (sz > 0) {
		cout << arr[top--] << '\n';
		sz--;
	}
	else cout << "-1" << '\n';
}
void Size() {
	if (sz > 0) cout << sz << '\n';
	else cout << "0" << '\n';
}
void Empty() {
	if (sz > 0) cout << "0" << '\n';
	else cout << "1" << '\n';
}
void Top() {
	if (sz > 0) {
		cout << arr[sz] << '\n';
	}
	else cout << "-1" << '\n';
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			Push();
		}
		else if (str == "pop") {
			Pop();
		}
		else if (str == "size") {
			Size();
		}
		else if (str == "empty") {
			Empty();
		}
		else if (str == "top") {
			Top();
		}
	}
}