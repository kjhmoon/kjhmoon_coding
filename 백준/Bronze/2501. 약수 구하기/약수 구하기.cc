#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int p, k;
	int count = 0;
	cin >> p >> k;
	for (int i = p; i >= 1; i--) {
		if (p % i == 0) {
			count++;
			if (count == k) {
				cout << p / i;
				exit(0);
			}
		}
	}
	cout << 0;
	return 0;
}