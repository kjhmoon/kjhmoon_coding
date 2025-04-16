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
	int input;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		sum += input;
	}
	cout << sum - (n - 1);
	return 0;
}