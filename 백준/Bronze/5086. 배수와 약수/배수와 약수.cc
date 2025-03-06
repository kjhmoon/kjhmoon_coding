#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	int n;
	while (cin >> a >> b) {
	if (a == 0 && b == 0) {
		exit(0);
	}
	n = a / b;
	if (n == 0) {
		if (b % a == 0) {
			cout << "factor" << '\n';
		}
	}
	else if (n != 0){
		if (a % b == 0) {
			cout << "multiple" << '\n';
		}
		else {
			cout << "neither" << '\n';
		}
	}
	
	}
	return 0;
}