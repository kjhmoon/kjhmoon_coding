#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    int a, b;
    string c;
    while (1) {
        cin >> c >> a >> b;
        if (c == "#" && a == 0 && b == 0) {
            break;
        }
        else if (a > 17 || b >= 80) {
            cout << c << ' ' << "Senior" << "\n";
        }
        else {
            cout << c << ' ' << "Junior" << "\n";
        }
    }
    return 0;
}
