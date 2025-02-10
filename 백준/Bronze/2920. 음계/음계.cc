#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
    string ascending = "1 2 3 4 5 6 7 8";
    string descending = "8 7 6 5 4 3 2 1";
    string n;
    int A = 2;
    getline(cin, n);
    if (n == ascending) {
        cout << "ascending";
    }
    else if (n == descending) {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
    return 0;
}
