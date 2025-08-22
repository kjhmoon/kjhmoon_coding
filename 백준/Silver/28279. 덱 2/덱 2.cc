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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque <int> S;
    int N;
    int num, input;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num == 1) {
            cin >> input;
            S.push_front(input);
        }
        else if(num == 2) {
            cin >> input;
            S.push_back(input);
        }
        else if (num == 3) {
            if (S.empty()) {
                cout << -1 << '\n';
                
            }
            else {
                cout << S.front() << '\n';
                S.pop_front();
            }
        }
        else if (num == 4) {
            if (S.empty()) {
                cout << -1 << '\n';

            }
            else {
                cout << S.back() << '\n';
                S.pop_back();
            }
        }
        else if (num == 5) {
            cout << S.size() << '\n';
        }
        else if (num == 6) {
            if (S.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (num == 7) {
            if (S.empty()) {
                cout << -1 << '\n';
           }
            else {
                cout << S.front() << '\n';
            }
        }
        else if (num == 8) {
            if (S.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << S.back() << '\n';
            }
        }
    }
    return 0;
}
