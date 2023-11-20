#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, j, k;
	string a, b;
	cin >> a >> b;
	string result;
	for (i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			result = a;
			break;
		}
		else if (b[i] > a[i]) {
			result = b;
			break;
		}
		else {
			continue;
		}
	}
	cout << result[2] << result[1] << result[0];
}