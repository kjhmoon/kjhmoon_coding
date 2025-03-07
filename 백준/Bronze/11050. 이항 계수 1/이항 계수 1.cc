#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a = 1; //n!
    int b = 1; //(n-k)!
    int b1 = n - k;
    int c = 1; //k!
    for (int i = n; i > 0; i--) { 
        a *= i;
    }
    for (int j = k; j > 0; j--) {
        c *= j;
    }
    for (int l = b1; l > 0; l--) {
        b *= l;
    }
    cout << a / (b * c);
    return 0;
}