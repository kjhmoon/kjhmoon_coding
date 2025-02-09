#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    long b = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        b = i * b;
    }
    cout << b;
    return 0;
}
