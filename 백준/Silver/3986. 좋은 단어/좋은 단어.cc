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
	stack<char> st;
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			if (!st.empty()){
				if (st.top() == input[j]) {
					st.pop();
				}
				else {
					st.push(input[j]);
				}
			}
			else {
				st.push(input[j]);
			}
		}
		if (st.empty()) {
			count++;
		}
		else {
			while (!st.empty()) {
				st.pop();
			}
		}
	}
	cout << count;
	return 0;
}