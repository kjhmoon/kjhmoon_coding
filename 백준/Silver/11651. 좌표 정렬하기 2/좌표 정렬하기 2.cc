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
    vector <pair<int, int>> S;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        S.push_back({a,b});
    }
    sort(S.begin(), S.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
        return a.first < b.first;
        }
        return a.second < b.second;
        });
    for (const auto& p : S) {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}
