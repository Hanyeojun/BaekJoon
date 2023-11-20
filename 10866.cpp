#include<iostream>
using namespace std;
class node {
public:
	node(int a, node* b, node* c) {
		val = a;
		left = b;
		right = c;
	}
	node* left;
	node* right;
	int val;//value
};

class deque {
public:
	void Push_front(int a) {
		if (Empty()) {
			fnt = new node(a, 0, 0);
			bk = fnt;
		}
		else {
			fnt->left = new node(a, 0, fnt);
			fnt = fnt->left;
		}
		sz++;
	}

	void Push_back(int a) {
		if (Empty()) {
			bk = new node(a, 0, 0);
			fnt = bk;
		}
		else {
			bk->right = new node(a, bk, 0);
			bk = bk->right;
		}
		sz++;
	}

	int Pop_front() {
		if (sz == 0) return -1;
		int res = fnt->val;
		fnt = fnt->right;
		if (--sz == 0) bk = 0; //if문 안의 조건문을 비교하는 과정에서 size를 size--하므로 size-1이 됨
		return res;
	}

	int Pop_back() {
		if (sz == 0) return -1;
		int res = bk->val;
		bk = bk->left;
		if (--sz == 0) fnt = 0;
		return res;
	}

	int Size() { return sz; }

	int Front() { return (sz ? fnt->val : -1); }

	int Back() { return (sz ? bk->val : -1); }

	int Empty() { return (sz == 0); }

private:
	node* fnt = 0; //front
	node* bk = 0; //back
	int sz = 0; //size
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	string cmd;
	deque mDeque;
	cin >> n;
	while (n--) {
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> a;
			mDeque.Push_front(a);
		}
		else if (cmd == "push_back") {
			cin >> a;
			mDeque.Push_back(a);
		}
		else if (cmd == "pop_front") {
			cout << mDeque.Pop_front() << '\n';
		}
		else if (cmd == "pop_back") {
			cout << mDeque.Pop_back() << '\n';
		}
		else if (cmd == "size") {
			cout << mDeque.Size() << '\n';
		}
		else if (cmd == "empty") {
			cout << mDeque.Empty() << '\n';
		}
		else if (cmd == "front") {
			cout << mDeque.Front() << '\n';
		}
		else if (cmd == "back") {
			cout << mDeque.Back() << '\n';
		}
	}
}