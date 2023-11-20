#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main() {
	int t, text = 0, num = 0, cnt = 0, imp = 0; //테케, 문서개수, 궁금한문서위치, 인쇄순서, 중요도
	cin >> t;
	while (t--) {
		cnt = 0;
		cin >> text >> num;
		queue<pair<int, int>>q;
		priority_queue<int>res;
		for (int i = 0; i < text; i++) {
			cin >> imp;
			q.push({ i,imp }); //순서, 중요도
			res.push(imp); //우선순위큐 : 우선순위에 따라서 queue 정렬되어 들어감
		}
		while (!q.empty()) {
			int idx = q.front().first, vle = q.front().second;
			q.pop();
			if (res.top() == vle) { //res와 q의 중요도가 같다면
				res.pop();
				++cnt;
				if (idx == num) { //q에 저장된 순서와 궁금한 문서의 위치가 같다면
					cout << cnt << '\n';
					break;
				}
			}
			else q.push({ idx,vle });
		}
	}
}