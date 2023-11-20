#include<iostream>
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;
    if (a - (a / 100 * b) < 100){
        cout << 1;
    }
    else
        cout << 0;
}