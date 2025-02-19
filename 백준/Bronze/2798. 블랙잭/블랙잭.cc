#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int N, M;           //카드 개수 N, 딜러가 부른 숫자 M
    int sum_test;     //임시 sum
    int sum = -1;            //최종 sum
    int card[100];
    cin >> N >> M;
    for (int i = 0; i < N; i++) {      //card배열에 삽입
        cin >> card[i];
    }
    for (int i = 0; i < N; i++) {      //첫번째 뽑는 카드 기준
        for (int j = i+1; j < N; j++) {
            for (int m = j+1; m < N; m++) {
                sum_test = card[i] + card[j] + card[m];
                if (sum_test <= M) {
                    if (sum < sum_test) {
                        sum = sum_test;
                    }
                }
            }
        }
    }
    cout << sum;
    return 0;
}
