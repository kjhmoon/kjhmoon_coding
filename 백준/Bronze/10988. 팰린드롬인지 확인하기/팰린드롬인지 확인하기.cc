#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    string input; 
    string A;
    cin >> input;
    A = input;
    reverse(input.begin(), input.end());
    if (A == input) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}
