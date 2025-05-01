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
	string input;
	string output = "*";
	int count = 0;
	cin >> n;
	cin >> input;
	for (int i = 0; i < input.length();) {
		if (input[i] == 'S') {
			output += input[i];
			output += '*';
			i++;
		}
		if (input[i] == 'L' && input[i + 1] == 'L') {
			output += input[i];
			output += input[i + 1];
			output += '*';
			i = i + 2;
		}
	}
	for (int j = 0; j < output.length(); j++) {
		if (output[j] == '*') {
			count = count + 1;
		}
	}
	if (count < n) {
		cout << count;
		exit(0);
	}
	else {
		cout << n;
		exit(0);
	}
	return 0;
}