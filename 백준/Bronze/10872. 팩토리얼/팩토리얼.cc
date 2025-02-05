#include <iostream>
using namespace std;

int main() {
    int N;
    int A = 1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        A = A * i;
    }
    cout << A;
    return 0;
}
