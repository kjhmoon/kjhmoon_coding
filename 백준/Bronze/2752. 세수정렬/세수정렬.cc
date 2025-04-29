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
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a << ' ';
		if (b > c) {
			cout << c << ' ' << b;
		}
		else {
			cout << b << ' ' << c;
		}
	}
	if (b < a && b < c) {
		cout << b << ' ';
		if (a > c) {
			cout << c << ' ' << a;
		}
		else {
			cout << a << ' ' << c;
		}
	}
	if (c < b && c < a) {
		cout << c << ' ';
		if (b > a) {
			cout << a << ' ' << b;
		}
		else {
			cout << b << ' ' << a;
		}
	}
	return 0;
}