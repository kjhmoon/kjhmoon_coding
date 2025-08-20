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
    string N;   //입력받기
    vector <char> A;
    cin >> N;
    for (int i = 0; i < N.length(); i++) {
        A.push_back(N[i]);
    }
    sort(A.begin(), A.end(),greater<char>());
    for (auto w : A) {
        cout << w;
    }
    return 0;
}
