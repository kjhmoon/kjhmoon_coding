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
	stack<char> st;
	string A;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A;
		for (int i = 0; i < A.length(); i++) {
			if (A[i] == '(') {
				st.push('(');
			}
			else if (A[i] == ')') {
				if (st.empty()) {
					cout << "NO" << '\n';
					break;
				}
				else {
					st.pop();
				}
			}
			if (st.empty() && i == A.length()-1) {
				cout << "YES" << '\n';
			}
		}
		if (!st.empty()) {
			cout << "NO" << '\n';
			while (!st.empty()) {
				st.pop();
			}
		}
		A = "";
	}
	return 0;
}