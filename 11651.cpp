#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> vt;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		vt.push_back({ b,a }); //x, y를 반대로 삽입하여 y값에 따라 정렬되록 변환
	}
	stable_sort(vt.begin(), vt.end());
	for (int i = 0; i < n; i++) {
		cout << vt[i].second << ' ' << vt[i].first << '\n'; //예시 출력에 맞게 다시 x,y 출력 순서를 반대로 변환
	}
}