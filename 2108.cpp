#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int n = 0, num[500000] = {};

int Arithmetic() { //산술평균
	double sum = 0, result = 0;
	for (int i = 0; i < n; i++) {
		sum += num[i];
	}
	result = round(sum / n);
	return result;
}

int Median() { //중앙값
	return num[(n - 1) / 2];
}

int Mode() { //최빈값
    int cnt = 0, ans = 0, tmp=num[0], result = num[0];
    bool second = false;
    for (int i = 0; i < n; i++) {
        if (tmp == num[i]) {
            cnt++;
        }
        else {
            if (ans < cnt) {
                ans = cnt;
                result = num[i - 1];
                second = false;
            }
            else if (ans == cnt && !second) {
                result = num[i - 1];
                second = true;
            }
            cnt = 1;
            tmp = num[i];
        }
    }
    if (ans < cnt) {
        result = num[n - 1];
    }
    else if (ans == cnt && !second) {
        result = num[n - 1];
    }
    return result;
}

int Scope() { //범위
	return num[n - 1] - num[0];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	cout << Arithmetic() << '\n';
	cout << Median() << '\n';
	cout << Mode() << '\n';
	cout << Scope();
}