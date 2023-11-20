#include <iostream>
using namespace std;
int main() {
    string str;
    int age, weight;
    while (1) {
        cin >> str >> age >> weight;
        if (str == "#" && age == 0 && weight == 0) {
            return 0;
        }
        cout << str << " ";
        if (age > 17 || weight >= 80)
            cout << "Senior" << '\n';
        else
            cout << "Junior" << '\n';
    }
}