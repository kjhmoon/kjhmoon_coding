#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <regex>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s = { };
		cin >> s;
        if (s.length() >= 6 && s.length() <= 9) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    return 0;
}