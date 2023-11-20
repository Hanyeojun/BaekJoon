#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m;
int a[1000001] = {};
void BS(int t) {
	int first = 0, last = n - 1, middle = 0; //시작, 끝, 중앙
	//이분탐색
	while (first <= last) {
		middle = (first + last) / 2;
		if (a[middle] == t) { //중앙값과 같을 떄
			cout << "1\n";
			return;
		}
		else if (t < a[middle])	last = middle - 1; //중앙값보다 작을 때
		else first = middle + 1; //중앙값보다 클 때
	}
	cout << "0\n";
	return;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//선형탐색을 할 경우 시간초과. 따라서 이분탐색 사용
	int t;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n); //이분탐색을 위한 정렬
	cin >> m;
	while (m--) {
		cin >> t;
		BS(t);
	}
}