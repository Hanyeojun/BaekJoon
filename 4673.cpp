#include<iostream>
using namespace std;
int d(int num) {
	int sum = num;
	while (num!=0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}

int main() {
	bool check[10001] = { false };
	for (int i = 1; i <= 10000; i++) {
		int n = d(i);
		if (n < 10001) {
			check[n] = true;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (!check[i]) {
			cout << i << '\n';
		}
	}
	return 0;
}