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
    string input;
    string output;
    char arr[55];
    int K = 0;
    fill(arr, arr + 55, '&');
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        arr[i] = input[i];
    }
    while (1) {
        if (arr[K] == '&') {//문자열 벗어남 바로 종료
            for (int j = 0; j < output.length(); j++) {
                cout << output[j];
            }
            exit(0);
        }
        if (arr[K] == 'X' && arr[K + 1] == 'X' && arr[K + 2] == 'X' && arr[K + 3] == 'X') {
            output += "AAAA";
            K = K + 4;
            continue;
        }
        else if (arr[K] == 'X' && arr[K + 1] == 'X') {
            output += "BB";
            K = K + 2;
            continue;
        }
        else if (input.length() == 1 && arr[K] == 'X') {
            cout << -1;
            exit(0);
        }
        else if (arr[K] == 'X' && arr[K + 1] == '.') {
            cout << -1;
            exit(0);
        }
        else if (arr[K] == '.' && arr[K + 1] == 'X' && arr[K + 2] != 'X') {
            cout << -1;
            exit(0);
        }
        else if (arr[K] == 'X' && arr[K + 1] != 'X') {
            cout << -1;
            exit(0);
        }
        else if (arr[K] == '.') {
            output += '.';
            K = K + 1;
            continue;
        }
    }
    return 0;
}
