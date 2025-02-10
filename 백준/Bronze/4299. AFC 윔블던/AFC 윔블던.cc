#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
    double m, n, L, a ,b;
    cin >> m >> n;
    if (m < n ) {
        cout << -1;
    }
    else if (m == 0 && n == 0) {
        cout << 0 << ' ' << 0;
    }
    else {
        L = m + n;
        a = L / 2;
        b = m - a;
        if (a != (int)a || b != (int)b || a < 0 || b < 0) {
            cout << -1;
        }
        else if (a > b) {
            cout << a << ' ' << b;
        }
        else {
            cout << b << ' ' << a;
        }
    }
    return 0;
}
