#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int list[51] = { 0 };
	int frame[51][2];

	for (int i = 0; i < n; i++) {
		cin >> frame[i][0] >> frame[i][1];
	}
	for (int i = 0; i < n; i++) {
		int grade = 1;
		for (int j = 0; j < n; j++) {
			if (frame[i][0] < frame[j][0] && frame[i][1] < frame[j][1]) {
				grade++;
			}
		}
		list[i] = grade;
	}
	for (int i = 0; i < n; i++) {
		cout << list[i] << ' ';
	}
}