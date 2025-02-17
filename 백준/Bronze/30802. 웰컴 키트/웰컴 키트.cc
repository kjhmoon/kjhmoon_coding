#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n; //참가자의 수
    int size[6];//사이즈별 인원수
    int P_1, P_2; //몇묶음, 자루당 몇개 주문
    int t, p; //T장씩 몇묵음, p자루씩 최대 몇묵음
    int T_sum = 0;
    int P_sum = 0;
    cin >> n;
    for (int i = 0; i < 6; i++) {   //인원수 삽입하기
        cin >> size[i];
        P_sum = P_sum + size[i];
    }
    cin >> t >> p;              //t,p입력받기
    P_1 = P_sum / p;
    P_2 = P_sum % p;
    for (int i = 0; i < 6; i++) { //제일 많은 인원수 뽑기
       T_sum = T_sum + (size[i] / t)+1;
       if (size[i] % t == 0) {
           T_sum--;
       }
    }
    cout << T_sum << '\n';
    cout << P_1 << ' '<< P_2;

    return 0;
}
