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
	int max = 0;
	int min1 = 0;
	int min2 = 0;
	cin >> a >> b >> c;
	if (a >= b && a >= c) {
		max = a;
		min1 = b;
		min2 = c;
	}
	if (b >= a && b >= c) {
		max = b;
		min1 = a;
		min2 = c;
	}
	if (c >= a && c >= b) {
		max = c;
		min1 = b;
		min2 = a;
	}
	if (max == min1 && min1 == min2 && min2 == max) {
		cout << max + min1 + min2;
		exit(0);
	}
	if (max == min1 || max == min2) {
		cout << max + min1 + min2;
		exit(0);
	}
	for(int i = max; i > 0; i--) {
		if (i < min1 + min2) {
			cout << i + min1 + min2;
			exit(0);
		}
	}
	
	return 0;
}