#include <iostream>
using namespace std;

int main() {
    int arr[5] = { 0 };
    int max = 0;
    int winner = 0;

    // 입력 및 총점 계산
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            int score;
            cin >> score;
            arr[i] += score;
        }
    }

    // 최고 점수 찾기
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            winner = i + 1;
        }
    }

    cout << winner << " " << max;
    return 0;
}
