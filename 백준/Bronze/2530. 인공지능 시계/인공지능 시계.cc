#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    int h, m, s;               //시간, 분, 초 
    long long a;                       // 소요시간 
    cin >> h >> m >> s; // 17시 40분 45초
    cin >> a;                //6015초 1차: 몫 100 나머지 15
    s = s + a % 60;
    m = m + a / 60;
    if(s >= 60) { // 소요시간 / 60 = 몫->분(m) 나머지->초(s)
        m = m + s / 60;
        s = s % 60;
    }
    if(m >= 60) { 
        h = h + m / 60;
        m = m % 60;
    }
    if (h >= 24) {
        h = h % 24;
    }
    cout << h << ' ' << m << ' ' << s;
    return 0;
}
