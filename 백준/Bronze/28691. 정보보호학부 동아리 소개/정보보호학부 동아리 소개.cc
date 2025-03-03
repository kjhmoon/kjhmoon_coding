#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	char A;
	cin >> A;
	if (A == 'M') {
		cout << "MatKor";
	}
	if (A == 'W') {
		cout << "WiCys";
	}
	if (A == 'C') {
		cout << "CyKor";
	}
	if (A == 'A') {
		cout << "AlKor";
	}
	if (A == '$') {
		cout << "$clear";
	}
	return 0;
}