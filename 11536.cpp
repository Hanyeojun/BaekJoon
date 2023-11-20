#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool comp(string s1, string s2) {
	return s1 > s2;
}
int main() {
	int n, icnt = 0, dcnt= 0;
	cin >> n;
	string* str = new string[n];
	string* dec = new string[n];
	string* inc = new string[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		inc[i] = str[i];
		dec[i] = str[i];
	}
	stable_sort(inc, inc + n); //str 오름차순
	stable_sort(dec, dec + n, comp); //str 내림차순
	for (int i = 0; i < n; i++) {
		if (str[i] == inc[i]) {
			icnt++;
		}
		if (str[i] == dec[i]) {
			dcnt++;
		}
	}
	if (icnt == n) {
		cout << "INCREASING";
	}
	else if (dcnt == n) {
		cout << "DECREASING";
	}
	else cout << "NEITHER";
}