#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int current = K; 
    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        current -= B; 
        current += A; 
    }

    cout << "비와이" << endl;
    return 0;
}
