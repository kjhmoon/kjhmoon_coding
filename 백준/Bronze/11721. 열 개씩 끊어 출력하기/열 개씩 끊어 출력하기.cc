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
	int count = 0;
	for (int i = 0; i < input.length(); i++) {
		if (count % 10 == 0 && count > 0) {
			cout << '\n';
		}
		cout << input[i];
		count++;
	}
	return 0;
}