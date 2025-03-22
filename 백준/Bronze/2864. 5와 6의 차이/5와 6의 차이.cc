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
    string A, B; //입력받은 수 
    string a, b; //최소값
    string aa, bb; //최대값
    long long int min, max; // a+b , aa+bb
    cin >> A >> B;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] == '5') {
            aa += '6';
            a += A[i];
        }
        else if (A[i] == '6') {
            a += '5';
            aa += A[i];
        }
        else {
            a += A[i];
            aa += A[i];
        }
    }
    for (int i = 0; i < B.length(); i++) {
        if (B[i] == '5') {
            bb += '6';
            b += B[i];
        }
        else if (B[i] == '6') {
            b += '5';
            bb += B[i];
        }
        else {
            b += B[i];
            bb += b[i];
        }
    }
    max = stoi(aa) + stoi(bb);
    min = stoi(a) + stoi(b);
    cout << min << ' ' << max;
    return 0;
}