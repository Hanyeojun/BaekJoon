#include<iostream>
using namespace std;
int arr[10000] = { 0 };
int idx = 0, front = 0, rear = -1, sz = 0;
void Push() {
	int x;
	cin >> x;
	arr[++rear] = x;
	sz++;
}
void Pop() {
	if (sz > 0) {
		cout << arr[front++] << '\n';
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
void Front() {
	if (sz > 0) cout << arr[front] << '\n';
	else cout << "-1" <<'\n';
}
void Back() {
	if (sz > 0) cout << arr[rear] << '\n';
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
		else if (str == "front") {
			Front();
		}
		else if (str == "back") {
			Back();
		}
	}
}

/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/