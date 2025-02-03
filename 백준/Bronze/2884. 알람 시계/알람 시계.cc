#include <iostream>
using namespace std;

int main() {
	int H;
	int M;
	cin >> H >> M;
	if (M < 45) {
		H--;
		M = 60 - (45 - M);
		if (H < 0) {
			H = 23;
		}
	}
	else{
		M = (M - 45);
	}
	cout << H << " " << M;
	return 0;
}