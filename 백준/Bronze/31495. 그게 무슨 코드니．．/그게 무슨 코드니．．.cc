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
    string input;
    getline(cin, input);
    if (input[0] == '"' && input.length() == 1) {
        cout << "CE";
        exit(0);
    }
    if (input[0] == '"' && input[input.length()-1] == '"') {
        if (input[0] == '"' && input[1] == '"') {
            cout << "CE";
            exit(0);
        }
        for (int i = 1; i < input.length()-1; i++) {
            cout << input[i];
        }
        exit(0);
    }
    else {
        cout << "CE";
        exit(0);
    }
    return 0;
}
