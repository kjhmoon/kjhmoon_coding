#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int input_number[1000];
	int output_number[1000] = { 0 };
	int n; 
	int number;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input_number[i];
	}
	sort(input_number, input_number + n);
	for (int j = 0; j < n; j++) {
		cout << input_number[j] << '\n';
	}

	return 0;
}
