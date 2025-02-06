#include <iostream>
using namespace std;

int main() {
	int ary[28];
	int student[30] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
	int act[2];
	int m = 0;
	for (int i = 0; i < 28; i++) {
		cin >> ary[i];
	}
	for (int i = 0; i < 28; i++) {
		for (int j = 0; j < 30; j++) {
			if (ary[i] == student[j]) {
				student[j] = -1;
				break;
			}
		}
	}
	for (int n = 0; n < 30; n++) {
		if (student[n] > -1) {
			act[m] = student[n];
			m = 1;
		}
	}
	if (act[0] < act[1]) {
		cout << act[0] << "\n" << act[1];
	}
	else {
		cout << act[1] << "\n" << act[0];
	}
		
	return 0;
}