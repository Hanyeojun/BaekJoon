#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 0, m = 0, sum = 0, result = 0;
	int number[100]={};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = number[i] + number[j] + number[k];
				if (m - sum >= 0 && m - result > m - sum) {
					result = sum;
				}
				sum = 0;
			}
		}
	}
	cout << result;
}