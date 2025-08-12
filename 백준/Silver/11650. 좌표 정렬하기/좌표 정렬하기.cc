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
    vector<pair<int, int>> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        input.push_back({ a,b });
    }
    sort(input.begin(), input.end());
    for (const auto& w : input) {
        cout << w.first << ' ' << w.second << '\n';
    }
    return 0;
}
