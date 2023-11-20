#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int wid = 0, len = 0, store = 0, sum = 0; //wid = 가로, //len = 세로
	vector<pair<int, int>>v;
	pair<int, int> x;
	cin >> wid >> len >> store;
	for (int i = 0; i < store; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	cin >> x.first >> x.second;
	for (int i = 0; i < store; i++) {
		if (x.first == 1) {
			if (v[i].first == 1) sum += abs(x.second - v[i].second);
			else if (v[i].first == 2)sum += min(len + v[i].second + x.second, (wid - v[i].second) + len + (wid - x.second));
			else if (v[i].first == 3) sum += x.second + v[i].second;
			else if(v[i].first==4)sum += (wid - x.second) + v[i].second;
		}
		else if (x.first == 2) {
			if (v[i].first == 1) sum += min(x.second + len + v[i].second, (wid - x.second) + len + (wid - v[i].second));
			else if (v[i].first == 2)sum += abs(x.second - v[i].second);
			else if (v[i].first == 3) sum += (len - v[i].second) + x.second;
			else if (v[i].first == 4)sum += (wid - x.second) + (len - v[i].second);
		}
		else if (x.first == 3) {
			if (v[i].first == 1) sum += x.second + v[i].second;
			else if (v[i].first == 2)sum += (len - x.second) + v[i].second;
			else if (v[i].first == 3) sum += abs(x.second - v[i].second);
			else if (v[i].first == 4)sum += min(x.second + wid + v[i].second, (len - x.second) + wid + (len - v[i].second));
		}
		else if (x.first == 4) {
			if (v[i].first == 1) sum += x.second + (wid - v[i].second);
			else if (v[i].first == 2)sum += (len - x.second) + (wid - v[i].second);
			else if (v[i].first == 3) sum += min(x.second + wid + v[i].second, (len - x.second) + wid + (len - v[i].second));
			else if (v[i].first == 4)sum += abs(x.second - v[i].second);
		}
	}
	cout << sum;
}