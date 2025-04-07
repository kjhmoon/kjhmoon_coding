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
	int a;
	int n;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			cin >> a;
			st.push(a);
		}
		if (input == "pop") {
			if (st.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		if (input == "size") {
			cout << st.size() << '\n';
		}
		if (input == "empty") {
			if (st.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		if (input == "top") {
			if (st.empty()) {
				cout << -1 <<'\n';
			}
			else {
				cout << st.top() << "\n";
			}
		}
	}
	return 0;
}