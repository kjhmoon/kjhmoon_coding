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
	cin >> a >> b >> c;
	if (a == 60 && b == 60 && c == 60) {
		cout << "Equilateral";
		exit(0);
	}
	if (a + b + c != 180) {
		cout << "Error";
		exit(0);
	}
	else {
		if (a != b && b != c && c != a) {
			cout << "Scalene";
			exit(0);
		}
		if(a == b || b == c || c == a){
			cout << "Isosceles";
			exit(0);
		}
	}
	return 0;
}