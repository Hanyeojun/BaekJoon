#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Infor {
   public:
    string name;
    int korean;
    int english;
    int math;
};

bool comp(Infor t1, Infor t2) {
    if (t1.korean == t2.korean && t1.english == t2.english && t1.math == t2.math) {
        return t1.name < t2.name;
    }
    if (t1.korean == t2.korean && t1.english == t2.english) {
        return t1.math > t2.math;
    }
    if (t1.korean == t2.korean) {
        return t1.english < t2.english;
    }
    return t1.korean > t2.korean;
}

int main() {
    int n;
    cin >> n;
    vector<Infor> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].name >> v[i].korean >> v[i].english >> v[i].math;
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; i++) {
        cout << v[i].name << '\n';
    }
}