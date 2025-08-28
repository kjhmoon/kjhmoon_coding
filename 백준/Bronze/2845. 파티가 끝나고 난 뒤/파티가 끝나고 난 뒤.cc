#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main() {
    int L, P;
    cin >> L >> P;
    int input;
        for (int i = 0; i < 5; i++) {
            cin >> input;
            cout << input - (L * P) << ' ';
    }
    return 0;
}
