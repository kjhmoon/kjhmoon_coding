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
    int a, b, c;
    int sum = 1;
    string sum1;
    string sum2;
    string sum3;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a % 10 == 0) {
            cout << 10 << '\n';
            continue;
        }
        if (b >= 4) {
            if (b % 4 == 0) {
                c = 3;
            }
            else {
                c = (b % 4)-1;
            }
            for (int j = 0; j < 4; j++) {
                sum *= a;                   
                sum1 = to_string(sum);
                sum2 += sum1.back();
                sum3 = sum1.back();
                sum = stoi(sum3);
            }
            cout << sum2[c] << '\n';
            sum1 = "";
            sum2 = "";
            sum3 = "";
            sum = 1;
            a = 0;
            b = 0;
            c = 0;
        }
        else {
            for (int j = 0; j < b; j++) {
                sum *= a;
                sum1 = to_string(sum);
            }
            cout << sum1.back() << '\n';
            sum1 = "";
            sum2 = "";
            sum3 = "";
            sum = 1;
            a = 0;
            b = 0;
            c = 0;
        } 
    } 
    return 0;
}