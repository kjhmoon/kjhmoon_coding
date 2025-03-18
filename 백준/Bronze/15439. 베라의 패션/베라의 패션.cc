#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 0;
		exit(0);
	}
	else {
		cout << n * (n - 1);
	}
	return 0;
}