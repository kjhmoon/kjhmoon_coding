#include <iostream>
using namespace std;

int main() {
    int D, H, M;
    cin >> D >> H >> M;
    
    if (1440 * D + 60 * H + M - 16511 < 0) {
        cout << "-1";
    }
    else {
        cout << 1440 * D + 60 * H + M - 16511; 
    }
    
    return 0;
}