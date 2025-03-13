#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0) {
			exit(0);
		}
		if (a > b && a > c) {
			if (a >= b + c) {
				cout << "Invalid" << '\n';
				continue;
			}
		}
		if (b < a && b > c) {
			if (b >= a + c) {
				cout << "Invalid" << '\n';
				continue;
			}
		}
		if (c > a && c > b) {
			if (c >= a + b) {
				cout << "Invalid" << '\n';
				continue;
			}
		}
		if (a != b && b != c && c != a) {
			cout << "Scalene" << '\n';
				continue;
		}
		if (a == b && b == c && c == a && a != 0) {
			cout << "Equilateral" << '\n';
			continue;
		}
		if (a == b || b == c || c == a) {
			cout << "Isosceles" << '\n';
			continue;
		}
	}
	
	
	return 0;
}