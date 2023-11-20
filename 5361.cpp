#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        double blaster = 350.34, visual = 230.90;
        double hearing = 190.55, eight = 125.30, leg = 180.90;
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        blaster *= a;
        visual *= b;
        hearing *= c;
        eight *= d;
        leg *= e;
        double sum = blaster + visual + hearing + eight + leg;
        cout << fixed;
        cout.precision(2);
        cout << '$' << sum << '\n';
    }
}