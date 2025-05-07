#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int D, H, W;
    cin >> D >> H >> W;

    double k = (double)(D * D) / (H * H + W * W);
    double scale = sqrt(k);

    int height = (int)(scale * H);
    int width = (int)(scale * W);

    cout << height << " " << width << '\n';  // 반드시 개행
    return 0;
}
