#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int pn[100];
    int count = 0;
    int pn_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pn[i];
        for (int j = 1; j < 1000; j++) {
            if (pn[i] % j == 0) {
                count++;
            }
            if (pn[i] < j) {
                break;
            }
        }
        if (count == 2) {
            pn_count += 1;
        }
        count = 0;
    }
    cout << pn_count;
    return 0;
}
