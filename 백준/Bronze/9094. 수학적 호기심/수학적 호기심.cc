#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <utility>

using namespace std;
int main() {
    int j;
    int n, m;
    int num1, num2;
    int count = 0;
    cin >> j;
    for (int i = 0; i < j; i++) {
        cin >> n >> m;
        for (int k = 1; k < n; k++) { // a
            for (int l = 1; l < n; l++) { //b
                num1 = (k * k) + (l * l) + m;
                num2 = k * l;
                if (num1 % num2 == 0 && k < l) {
                    count++;
                }
            }
        }
        cout << count << '\n';
        count = 0;
    }
    return 0;
}
