#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int count = 0;
    int x = 0;
    while (cin >> n) {
        if (n == -1) {
            exit(0);
        }
        for (int i = 1; i < n; i++) { //배열 크기와 약수의 합 저장
            if (n % i == 0) {
                count++;
                sum += i;
            }
        }
        x = 0;
        vector<int> divisor(count); //n만큼 동적배열 생성 
        for (int i = 1; i < n; i++) {   // 약수 저장
            if (n % i == 0) {
                divisor[x] = i;
              x++;
            }
        }
        
        if (sum == n) {
            cout << n << " = ";
            for (int j = 0; j < count; j++) {
                if (j == count - 1) {
                    cout << divisor[j] << '\n';
                    break;
                }
                cout << divisor[j] << " + ";
            }
        }
        else {
            cout << n << " is NOT perfect." << '\n';
        }
        sum = 0;
        divisor.resize(0);
        count = 0;
    }
    return 0;
}