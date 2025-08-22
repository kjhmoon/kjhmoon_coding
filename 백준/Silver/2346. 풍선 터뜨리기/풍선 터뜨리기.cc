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
    int n;
    int num[1001];
    int temp;                           //잠깐 front 저장(배열 위치)
    deque <int> S;
    cin >> n;
    for (int i = 1; i <= n; i++) {  //풍선 속 종이 삽입
        int input;
        cin >> input;
        num[i] = input;
        S.push_back(i);
    }
    while (1) {
        if (S.size() == 1) {
            cout << S.front();
            exit(0);
        }
        cout << S.front() << ' ';                                            //차례가 되었으니 출력
        temp = S.front();                                                   //터트린 풍선에 있는 종이 저장
        S.pop_front();                                                     //출력 후 pop
        if (num[temp] > 0) {                                            //이동거리가 양수인경우
            for (int k = 0; k < num[temp] - 1; k++) {            //num[temp] - 1번 pop -> push
                S.push_back(S.front());                               //가장 앞에 있는 원소를 가장 뒤로 복사
                S.pop_front();
            }
        }
        else {                                                                    //음수인경우
            for (int k = 0; k < abs(num[temp]); k++) {
                S.push_front(S.back());
                S.pop_back();
            }
        }
    }
    return 0;
}
