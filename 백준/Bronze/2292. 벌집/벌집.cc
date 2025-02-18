#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int floor = 2;
    int A = 2;
    int j = 1;
    int i = 0;
    int m = 2;
    cin >> n;
    if (n == 1) {
        cout << 1;
        exit(0);
    }
    else if (1 < n && n < 8) {
        cout << 2;
        exit(0);
    }
    else {
        while(1){
            if (6*i+A<= n && n <=6*j+1) {
                cout << floor;
                exit(0);
            }
            else {
                j = j+m;
                m++;
                A = 6 * i + A;
                i++;
                floor++;
            }     
        }
    }
    return 0;
}
