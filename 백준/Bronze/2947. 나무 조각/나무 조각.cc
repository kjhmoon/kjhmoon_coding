#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {
	int input[5];
	int temp;
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}
	while (1) {
		for (int k = 0; k < 4; k++) {
			if (input[k] > input[k + 1]) {
				temp = input[k];
				input[k] = input[k + 1];
				input[k + 1] = temp;
				for (int j = 0; j < 5; j++) {
					cout << input[j] << ' ';
				}
				cout << '\n';
			}
			else {
				continue;
			}
		}
		if (input[0] == 1 && input[1] == 2 && input[2] == 3 && input[3] == 4 && input[4] == 5) {
			exit(0);
		}
	}
	
	return 0;
}