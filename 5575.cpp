#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 3; ++i) {
        int sh, sm, ss, eh, em, es, h, m, s;
        cin >> sh >> sm >> ss >> eh >> em >> es;

        if (es < ss) {
            s = es + 60 - ss;
            em--;
        } else {
            s = es - ss;
        }
        if (em < sm) {
            m = em + 60 - sm;
            eh--;
        } else {
            m = em - sm;
        }
        h = eh - sh;
        cout << h << ' ' << m << ' ' << s << '\n';
    }
}