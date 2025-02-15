#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && c < a || a < c && b < a) {
		cout << a;
	}
	else if (a < b && b < c || c < b && b < a) {
		cout << b;
	}
	else if (a < c && c < b || b < c && c < a) {
		cout << c;
	}
	else {
		cout << a;
	}
	return 0;
}
