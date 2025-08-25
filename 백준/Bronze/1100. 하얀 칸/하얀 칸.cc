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
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0 || i == 0) {     //첫번째 자리가 하얀색인 경우 
            cin >> input;
            for (int j = 0; j < 8; j = j+2) {
                if (input[j] == 'F') {
                    count++;
                }
            }
        }
        else {      //첫번째 자리가 검은색인 경우 
            cin >> input;
            for (int j = 1; j < 8; j = j+2) {
                if (input[j] == 'F') {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}
