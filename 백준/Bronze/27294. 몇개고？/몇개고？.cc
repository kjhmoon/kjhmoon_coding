#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int T, S;
    cin >> T >> S;

    if (S == 1) {   //술 마심
        if (12 <= T && T <= 16) {   //점심시간
            cout << 280;
        }
        else {
            cout << 280;
        }
    }
    else if (S == 0) {
        if (12 <= T && T <= 16) {   //점심시간
            cout << 320;
        }
        else {
            cout << 280;
        }
    }
    return 0;
}
