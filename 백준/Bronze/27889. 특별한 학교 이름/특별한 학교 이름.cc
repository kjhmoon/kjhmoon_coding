#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {
	string input;
	cin >> input;
	if (input == "NLCS") {
		cout << "North London Collegiate School";
		exit(0);
	}
	if (input == "BHA") {
		cout << "Branksome Hall Asia";
		exit(0);
	}
	if (input == "KIS") {
		cout << "Korea International School";
		exit(0);
	}
	if (input == "SJA") {
		cout << "St. Johnsbury Academy";
		exit(0);
	}
	return 0;
}