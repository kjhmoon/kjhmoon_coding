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
    int n;
    int count = 1;
    string arr;
    stack<int> st;
    cin >> n;
    st.push(count);
    arr += '+';
    int input;
    for (int i = 0; i < n; i++) {
        cin >> input;
        while (1) {
            if (st.empty() == 0) {
                if (st.top() == input) {
                    st.pop();
                    arr += '-';
                    break;
                }
                else if (st.top() < input) {
                    count++;
                    st.push(count);
                    arr += '+';
                }
                else if (st.top() > input) {
                    cout << "NO";
                    exit(0);
                }
            }
            else {
                    count++;
                    st.push(count);
                    arr += '+';
            }
        }
    }
    for (int j = 0; j < arr.length(); j++) {
        cout << arr[j] << '\n';
    }
    return 0;
}
