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
	int n;
	float a;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		getline(cin, input);
		for (int j = 0; j < input.length(); j++) {
			if (input[j] == '@') {
				a = a * 3;
			}
			if (input[j] == '%') {
				a = a + 5;
			}
			if (input[j] == '#') {
				a = a - 7;
			}
		}
		cout << fixed << setprecision(2) << a << '\n';
		input = "";
		a = 0;
	}
	
	return 0;
}