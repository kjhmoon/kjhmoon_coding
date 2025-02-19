#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n; 
    int m = 1;
    cin >> n;
    int l = n;
    for (int k = 0; k < n; k++) {
        for (int i = 1; i < l; i++) { // 기준 전 공백 출력
            cout << ' ';
        }
        for (int j = 0; j < m; j++) { //* 출력
            cout << '*';
        }
        m = m + 2;
        l = l - 1;
        cout << '\n';
    }
    m = 1;
    l = 2 * n-3;
    for (int k = 0; k < n-1; k++) {
        for (int i = 0; i < m; i++) {
            cout << ' ';          
        }
        for (int j = 0; j < l; j++) {    
            cout << '*';
        }
        m = m + 1;
        l = l - 2;
        cout << '\n';
    }
    return 0;
}
