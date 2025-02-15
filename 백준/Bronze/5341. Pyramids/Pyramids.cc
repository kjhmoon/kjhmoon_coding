#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int count = 1;
	int sum = 0;
	while (1) {
		cin >> n;
		if (n == 0) {
			exit(0);
		}
		for (int i = 1; i <= n; i++) {
			sum = sum + count;
			count++;
		}
		cout << sum << '\n';
		count = 1;
		sum = 0;
}
	return 0;
}
