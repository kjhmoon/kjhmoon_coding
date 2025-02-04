#include <iostream>
using namespace std;

int main() {
	int max = -1000000;
	int min = 1000000;
	int T;
	cin >> T;
	int ary[1000000];

	for (int i = 0; i < T; i++) {
		cin >> ary[i];


		if (ary[i] > max) {
			max = ary[i];
		}

	
		if (ary[i] < min) {
			min = ary[i];
		}
	}
	cout << min << " " << max;
	return 0;
}