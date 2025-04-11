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
	int a, b, c, d;
	int count = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b >> c >> d;
		if (a == 0) {
			count++;
		}
		if (b == 0) {
			count++;
		}
		if (c == 0) {
			count++;
		}
		if (d == 0) {
			count++;
		}
		if (count == 1) {
			cout << 'A' << '\n';
			count = 0;
			continue;
		}
		if (count == 2) {
			cout << 'B' << '\n';
			count = 0;
			continue;
		}
		if (count == 3) {
			cout << 'C' << '\n';
			count = 0;
			continue;
		}
		if (count == 0) {
			cout << 'E' << '\n';
			count = 0;
			continue;
		}
		if (count == 4) {
			cout << 'D' << '\n';
			count = 0;
			continue;
		}
	}
	return 0;
}