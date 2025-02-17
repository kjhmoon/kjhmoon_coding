#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c; //b가 빗변
    long A, B, C;
    int sum; //A+C;
    while (cin >> a >> b >> c) {
        A = a * a;
        B = b * b;
        C = c * c;
        if (A > C && A > B) {
            sum = C + B;
            if (A == sum) {
                cout << "right" << '\n';
            }
            else {
                cout << "wrong" << '\n';
            }
        }
        if (B > C && B > A) {
            sum = A + C;
            if (B == sum) {
                cout << "right" << '\n';
            }
            else {
                cout << "wrong" << '\n';
            }
        }
        if (C > A && C > B) {
            sum = A + B;
            if (C == sum) {
                cout << "right" << '\n';
            }
            else {
                cout << "wrong" << '\n';
            }
        }
        if (a == 0 && b == 0 && c == 0) {
            exit(0);
        }
    }
    
    return 0;
}
