#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        cout << A + B << "\n";
   }
    return 0;
}
