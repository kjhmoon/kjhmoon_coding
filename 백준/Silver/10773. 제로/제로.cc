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
	stack<int> st;
	int n;
	unsigned long long int input;
	unsigned long long int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == 0) {
			st.pop();
		}
		else {
			st.push(input);
		}
	}
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
	return 0;
}