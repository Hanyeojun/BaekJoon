#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 2; i <= n;) {
		if (n % i == 0) {
			cout << i << endl;
			n /= i;
		}
		else {
			i++;
		}
	}
	return 0;
}