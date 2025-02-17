#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int sum = 0;
    string n1;
    cin >> n;
    for (int i = -1; i < n; i++) {
        n1 = to_string(i);
        sum = i;
        for (int j = 0; j < n1.length(); j++) {
            sum = sum + (n1[j] - '0');
        }
        if (sum == n) {
            cout << i;
            exit(0);
        }
        else if(i == n-1 || n == 0) {
            cout << 0;
            exit(0);
        }
        sum = 0;
    }
    return 0;
}
