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
    int n, k; //현재 쿠폰 n개, 기준 도장 k개 
    int a;
    int b = 0;
    while (cin >> n >> k) {
        int sum = n;
        while (1) {
            a = n / k;  //치킨쿠폰 더 받을 수 있는 개수
            sum += a;  //sum에 추가
            if (k > (n / k) + (n%k)){ 
                cout << sum << '\n';
                sum = 0;
                n = 0;
                k = 0;
                a = 0;
                b = 0;
                break;
            }
            b = n % k; 
            n = a; //남아있는 치킨 쿠폰 
            n += b;
        }
    }
    return 0;
}