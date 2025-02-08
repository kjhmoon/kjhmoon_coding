#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R;
        string S;
        cin >> R >> S;

        string P;
        for (char ch : S) {
            P.append(R, ch); // 각 문자를 R번 반복하여 P에 추가
        }

        cout << P << '\n'; // 결과 출력
    }

    return 0;
}
