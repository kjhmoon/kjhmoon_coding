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

struct Data {
    int old;
    string name;
    int order;
};
int main() {
    int n;
    vector<Data> V;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Data v;
        cin >> v.old >> v.name;
        V.push_back(v);
        v.order = i;
    }
    stable_sort(V.begin(), V.end(), [](const Data& a, const Data& b) {
        if (a.old == b.old) {
            if (a.order > b.order) {
                return a.old < b.old;
            }
            else {
                return a.old > b.old;
            }
        }
            return a.old < b.old;
     });

    for (auto& p : V) {
        cout << p.old << ' ' << p.name << '\n';
    }

    return 0;
}
