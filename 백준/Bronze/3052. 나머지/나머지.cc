#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
    int A[10];
    int count = 10;
    
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
        A[i] = A[i] % 42;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (A[i] == A[j]) {
                count--;
                A[i] = -1;
            }
       }
        
    }
    cout << count;
    return 0;
}
