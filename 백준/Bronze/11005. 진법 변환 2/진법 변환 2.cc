#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <deque>
#include <utility>
using namespace std;

int main() {
    vector <int> remainder;     //나머지 저장
    unsigned long int N;            //10진법인 N
    unsigned long int num;
    int B;                               //B진법으로 변환
    cin >> N >> B;
    while (1) {
        num = N / B;
        if (num == 0) { //더이상 나누어지지 않음
            remainder.push_back(N % B); //나머지 저장
            reverse(remainder.begin(), remainder.end());
            for (int i = 0; i < remainder.size(); i++) {
                if (remainder[i] >= 10) {
                    char A = remainder[i] + 55;
                    cout << (char)A;
                }
                else {
                    cout << remainder[i];
                }
            }
            exit(0);
        }
        else {
            remainder.push_back(N % B); //나머지 저장
            N = N / B;
        }
    }
    return 0;
}
