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
	string input_str; 
	stack<char> st1;		// "( ) [ ] 구별 stack"
	int status = 1;			// 상태(1:YES -1:NO)
	while (1) {
		getline(cin, input_str);
		
		if (input_str == ".") {
			break;
		}
		for (int i = 0; i < input_str.length(); i++) {
			if (input_str[i] == '(' || input_str[i] == '[' ) {
				st1.push(input_str[i]);
			}
			if (input_str[i] == ')') {
				if (st1.empty() == 0 && st1.top() != '[') {
					st1.pop();
				}
				else {
					status = -1;
				}
			}
			if (input_str[i] == ']') {
				if (st1.empty() == 0 && st1.top() != '(') {
					st1.pop();
				}
				else {
					status = -1;
				}
			}
		}
		if (st1.empty() == 0) {
			status = -1;
			while (!st1.empty()) {
				st1.pop();
			}
		}
		if (status == -1) {
			cout << "no" << '\n';
			status = 1;
		}
		else {
			cout << "yes" << '\n';
		}
		input_str = "";
	}
	return 0;
}