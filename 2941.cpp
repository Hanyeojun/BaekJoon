#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string str;
	cin >> str;
	int i = 0, cnt = 0;
	while (i<str.length()) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				i++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				i++;
			}
			else if (str[i + 1] == 'z' && str[i + 2] == '=') {
				i += 2;
			}
		}
		else if (str[i] == 'l' && str[i + 1] == 'j') {
			i++;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j') {
			i++;
		}
		else if (str[i] == 's'&& str[i + 1] == '=') {
			i++;
		}
		else if (str[i] == 'z' && str[i + 1] == '=') {
			i++;
		}
		cnt++;
		i++;
	}
	cout << cnt << endl;
}