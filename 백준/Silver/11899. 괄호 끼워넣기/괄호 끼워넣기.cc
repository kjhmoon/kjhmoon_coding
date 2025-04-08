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
	stack<char> st;
	int count = 0;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (st.empty()) {
			st.push(input[i]);
		}
		else {
			if (st.top() == '(' && input[i] == ')') {
				st.pop();
			}
			else {
				st.push(input[i]);
			}
		}
	}
	while (!st.empty()) {
		st.pop();
		count++;
	}
	cout << count;
	return 0;
}