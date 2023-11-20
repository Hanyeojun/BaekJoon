// 진흥원 세미나
#include <iostream>
#include <utility>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str == "Algorithm") {
            cout << 204 << '\n';
        } else if (str == "DataAnalysis") {
            cout << 207 << '\n';
        } else if (str == "ArtificialIntelligence") {
            cout << 302 << '\n';
        } else if (str == "CyberSecurity") {
            cout << "B101" << '\n';
        } else if (str == "Network") {
            cout << 303 << '\n';
        } else if (str == "Startup") {
            cout << 501 << '\n';
        } else {
            cout << 105 << '\n';
        }
    }
}