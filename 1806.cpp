#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int n, s, r = 0, min=1000000001;
	vector<int>v;
	cin >> n >> s;
	int st = 0, e = 0, sum = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
    sum=v[0];
	
    while (st < n && e < n) {
        if(sum>=s) {
            r = e-st+1;
            sum -= v[st++];
            if(r < min) min = r;
        }
        else if(sum<s) {
            sum += v[++e];
        }
	}
    if(r==0) cout << 0;
    else cout<<min;
}