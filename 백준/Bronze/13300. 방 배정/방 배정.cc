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
    int n;
    int S;  //성별
    int Y;  //학년
    int man[7] = { 0 }; //남자
    int women[7] = { 0 }; //여자
    int k; //최대 방 인원
    int count = 0; //최종 방 개수
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> S >> Y;
        if (S == 1) {       //남학생
            man[Y]++;
        }
        if (S == 0) {       //여학생
            women[Y]++;
        }
    }
    for (int j = 0; j < 7; j++) {
        if (man[j] == 0) {
            continue;
        }
        if (man[j] <= k && women[j] > 0) {
            count++;
        }
        else {
            count += (man[j] / k) + 1;
        }
    }
    for (int j = 0; j < 7; j++) {
        if (women[j] == 0) {
            continue;
        }
        if (women[j] <= k && women[j] > 0) {
            count++;
        }
        else {
            count += (women[j] / k) + 1;
        }
    }
    cout << count;
    return 0;
}