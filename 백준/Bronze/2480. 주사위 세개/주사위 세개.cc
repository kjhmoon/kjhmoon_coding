#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int sum;
	cin >> a >> b >> c;
	if (a == b && b == c && c == a) {
		sum = 10000 + a * 1000;
	}
	if (a == b && a !=c && b != c) {
		sum = 1000 + a * 100;
	}
	if (b == c && a != c && b != a) {
		sum = 1000 + b * 100;
	}
	if (c == a && a != b && b != c) {
		sum = 1000 + c * 100;
	}
	if (a != b && b != c && c != a) {
		if (a > b && a > c) {
			sum = a * 100;
		}
		if (b > a && b > c) {
			sum = b * 100;
		}
		if (c > a && c > b) {
			sum = c * 100;
		}
	}
	cout << sum;
	return 0;
}