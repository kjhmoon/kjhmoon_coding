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
    int sum1;   // 2017상금
    int sum2;   // 2018상금
    int a, b;     // 2017 2018 등수
    int n;
    int sum3;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            sum1 = 0;
            sum2 = 0;
        }
        if (a == 1) {       //a 상금 결정
            sum1 = 5000000;
        }
        else if (a >= 2 && a <= 3) {
            sum1 = 3000000;
        }
        else if (a >= 4 && a <= 6) {
            sum1 = 2000000;
        }
        else if (a >= 7 && a <= 10) {
            sum1 = 500000;
        }
        else if (a >= 11 && a <= 15) {
            sum1 = 300000;
        }
        else if (a >= 16 && a <= 21) {
            sum1 = 100000;
        }
        else {
            sum1 = 0;
        }

        if (b == 1) { //b 상금 결정
            sum2 = 5120000;
        }
        else if (b >= 2 && b <= 3) {
            sum2 = 2560000;
        }
        else if (b >= 4 && b <= 7) {
            sum2 = 1280000;
        }
        else if (b >= 8 && b <= 15) {
            sum2 = 640000;
        }
        else if (b >= 16 && b <= 31) {
            sum2 = 320000;
        }
        else {
            sum2 = 0;
        }
        sum3 = sum1 + sum2;
        cout << sum3 << '\n';
        sum1 = 0;
        sum2 = 0;
        sum3 = 0;
        a = 0;
        b = 0;
    }
    return 0;
}