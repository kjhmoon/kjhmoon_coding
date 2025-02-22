#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int x, y, w, h;
	int min1;
	int min2;
	cin >> x >> y >> w >> h;	
	if (x > y) {
		min1 = y;
	}
	else {
		min1 = x;
	}
	if (w - x> h - y) {
		min2 = h - y;
	}
	else {
		min2 = w - x;
	}
	if (min1 > min2) {
		cout << min2;
	}
	else {
		cout << min1;
	}
	return 0;
}
