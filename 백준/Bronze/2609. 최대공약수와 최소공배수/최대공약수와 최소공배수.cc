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
    int a, b;
    int n;
    int number = 1;
    cin >> a >> b;
    if (a >= b) {
        n = b;
    }
    else {
        n = a;
    }
   
    for (int i = 2; i <= n; ) {
        if (a % i == 0 && b % i == 0) {
            number *= i;
            a = a / i;
            b = b / i;
        }
        else {
            i++;
        }
    }
    cout << number << '\n';
    cout << number * a * b << '\n';
    return 0;
}