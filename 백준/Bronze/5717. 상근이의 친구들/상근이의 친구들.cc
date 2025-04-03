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
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			exit(0);
		}
		cout << a + b << '\n';
	}
	return 0;
}