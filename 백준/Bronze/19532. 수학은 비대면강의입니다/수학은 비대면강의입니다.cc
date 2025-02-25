#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	int x, y;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i <= 999;) {
		x = i; 
		for (int j = -999; j <= 999;) {
			y = j;
			if (a * x + b * y == c) {
				if (d * x + e * y == f) {
					cout << x << ' ' << y;
					exit(0);
				}
				else {
					j++;
				}
			}
			else {
				j++;
			}
		}
		i++;
	}
	return 0;
}
