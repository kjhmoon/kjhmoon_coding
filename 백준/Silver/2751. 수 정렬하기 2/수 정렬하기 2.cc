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
    int N;
    int A;
    vector<int> input;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        input.push_back(A);
    }
    sort(input.begin(), input.end());
    for (const auto& W : input) {
        cout << W << '\n';
    }
    return 0;
}
