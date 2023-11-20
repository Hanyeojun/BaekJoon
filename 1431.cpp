#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int comp(string x, string y) {
    if (x.length() != y.length()) {
        return x.length() < y.length();
    }
    int xsum = 0, ysum = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] >= '0' && x[i] <= '9') {
            xsum += int(x[i]) - '0';
        }
        if (y[i] >= '0' && y[i] <= '9') {
            ysum += int(y[i]) - '0';
        }
    }
    if (xsum != ysum) {
        return xsum < ysum;
    }
    return x < y;
}

int main() {
    int n;
    string num[50] = {""};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, comp);
    for (int i = 0; i < n; i++) {
        cout << num[i] << '\n';
    }
}