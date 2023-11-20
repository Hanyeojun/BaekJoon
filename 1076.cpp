#include<iostream>
using namespace std;
int main() {
	int n[3] = {};
	long long r = 0;
	string str[3] = {}, clr[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	for (int i = 0; i < 3; i++) cin >> str[i];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			if (str[i] == clr[j]) {
				n[i] = j;
				break;
			}
		}
	}
	r = n[0] * 10 + n[1];
	for (int i = 0; i < n[2]; i++) {
		r *= 10;
	}
	cout << r;
}