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
    queue<int> S;
    string input;
    int input_S;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input == "push") {
            cin >> input_S;
            S.push(input_S);
        }
        else if(input == "pop") {
            if (S.empty() == 1) {
                cout << -1 << "\n";
            }
            else {
                cout << S.front() << "\n";
                S.pop();
            }
        }
        else if (input == "size") {
            cout << S.size() << "\n";
        }
        else if (input == "empty") {
            if (S.empty() == 1) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (input == "front") {
            if (S.empty() == 1) {
                cout << -1 << "\n";
            }
            else {
                cout << S.front() << "\n";
            }
        }
        else if (input == "back") {
            if (S.empty() == 1) {
                cout << -1 << "\n";
            }
            else {
                cout << S.back() << "\n";
            }
        }
    }
    return 0;
}
