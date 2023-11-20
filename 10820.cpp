#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (getline(cin, str)) {
		int s = 0, b = 0, n = 0, z = 0; //소문자, 대문자, 숫자, 공백

		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') s++;
			else if (str[i] >= 'A' && str[i] <= 'Z') b++;
			else if (str[i] >= '0' && str[i] <= '9') n++;
			else if (str[i] == ' ') z++;
		}
		cout << s << " " << b << " " << n << " " << z <<'\n';
	}
}