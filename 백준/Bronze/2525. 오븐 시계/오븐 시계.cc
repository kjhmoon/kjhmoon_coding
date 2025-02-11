#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int  h, m;
	int a; // 필요한 시간(분)
	cin >> h >> m >> a;
	m = m + a;
	if (m < 60) {
		cout << h << ' ' << m;
		exit(0);
	}
	else {
		h = h + m / 60;
		m = m % 60;
	}
	if (h < 24) {
		cout << h << ' ' << m;
		exit(0);
	}
	else {
		h = h % 24;
		cout << h << ' ' << m;
		exit(0);
	}
}
