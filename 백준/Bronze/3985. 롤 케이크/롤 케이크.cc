#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {
    int cake[1001];
    int people[1001];
    fill(people, people + 1001, 0);
    fill(cake, cake + 1001,-1);
    int L; //롤케이크 길이
    int N; //방청객 수
    int m, n; //방청객이 적은 수
    int max = -1;
    int max_re = -1;
    int num;
    int num_p = 0;
    int num_p2 = 0;
    cin >> L >> N;
    for (int i = 1; i <= N; i++) {      //방청객 번호 저장
        cin >> n >> m;
        num = m - n;
        for (int j = n; j <= m; j++) {
            if (num > max) {
                max = num;
                num_p = i;
            }
            if (cake[j] == -1) {
                cake[j] = i;
            }
        }
    }
    for (int k = 1; k <= L; k++) {  //방청객 수 배열저장
        people[cake[k]]++;
    }
    for (int k = 1; k <= N; k++) {
        if (people[k] > max_re) {
            max_re = people[k];
            num_p2 = k;
        }
        else if(people[k] == max) {
            continue;
        }
    }
    cout << num_p << '\n' << num_p2;
    exit(0);
    return 0;
}
