#include<iostream>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int a, b, c, d;
	string ab, cd;
	long long sum;
	cin >> a >> b >> c >> d;
	ab = to_string(a) + to_string(b);
	cd = to_string(c) + to_string(d);
	sum = stoll(ab) + stoll(cd);
	cout << sum;
}