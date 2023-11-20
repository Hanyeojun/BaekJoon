#include<iostream>
#include<cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	double x, hei, wid, diag;
	cin >> diag >> hei >> wid;
	x = sqrt(pow(diag, 2) / (pow(hei, 2) + pow(wid, 2)));
	cout << (int)(hei * x) << ' ' << (int)(wid * x) << '\n';
}