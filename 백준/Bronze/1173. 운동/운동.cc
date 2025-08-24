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
    int N, m, M, T, R; //운동시간, 최소맥박, 최대맥박, 1분 맥박증가, 1분휴식 맥박감소
    int X; //현재 맥박
    int count = 0; 
    int time = 0; //시간
    cin >> N >> m >> M >> T >> R;
    X = m;
    while (1) {
        if (time > N*200) {
            cout << -1;
            exit(0);
        }
        if (count == N ) {   //운동시간 달성
            cout << time;
            exit(0);
        }
        if (X > M || X+T > M) {           //현재 맥박 최대치 넘김 -> 휴식
            X = X - R;        //1분 휴식 맥박 감소
            time++;
        }
        else if (X < m) {   //현재 맥박 최소치 미만 -> 맥박 m 설정 
            X = m;
        }
        else {
            X = X + T;          //1분 운동 맥박 증가
            count++;            //운동시간 1분 증가
            time++;
        }
    }
    return 0;
}
