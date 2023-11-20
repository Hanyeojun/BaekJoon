#include<iostream>
#include<string>
using namespace std;
int main() {
	int time = 0;
	string number;
	cin >> number;
	for (int i = 0; i < number.length(); i++) {
		if (number[i] == 'A' || number[i] == 'B' || number[i] == 'C') {
			time += 3;
		}
		else if (number[i] == 'D' || number[i] == 'E' || number[i] == 'F') {
			time += 4;
		}
		else if (number[i] == 'G' || number[i] == 'H' || number[i] == 'I') {
			time += 5;
		}
		else if (number[i] == 'J' || number[i] == 'K' || number[i] == 'L') {
			time += 6;
		}
		else if (number[i] == 'M' || number[i] == 'N' || number[i] == 'O') {
			time += 7;
		}
		else if (number[i] == 'P' || number[i] == 'Q' || number[i] == 'R' || number[i] == 'S') {
			time += 8;
		}
		else if (number[i] == 'T' || number[i] == 'U' || number[i] == 'V') {
			time += 9;
		}
		else if (number[i] == 'W' || number[i] == 'X' || number[i] == 'Y' || number[i] == 'Z') {
			time += 10;
		}
	}
	cout << time << endl;
}