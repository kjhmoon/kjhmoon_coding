#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string jewan;
	string doctor;
	cin >> doctor >> jewan;
	if (doctor == jewan || doctor.length() > jewan.length()) {
		cout << "go";
	}
	else {
		cout << "no";
	}
	return 0;
}
