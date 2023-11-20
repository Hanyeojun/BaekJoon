#include<iostream>
using namespace std;
int main() {
	int result = 0, outcome = 0;
	int sum[4] = {};
	int total[4] = {};
	for (int i = 0; i < 4; i++) {
		cin >> sum[i];
		result += sum[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> total[i];
		outcome += total[i];
	}
	if (result > outcome) {
		cout << result;
	}
	else {
		cout << outcome;
	}
}