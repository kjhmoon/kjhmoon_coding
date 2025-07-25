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
	char output;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 32 || input[i] >= 48 && input[i] <= 57) {
			cout << input[i];
			continue;
		}
		if (input[i] >= 65 && input[i] <= 90) {		//대문자인 경우
			input[i] = input[i] + 13;
			if (input[i] > 90) {
				output = input[i] - 26;
				cout << output;
			}
			else {
				output = input[i];
				cout << output;
			}
		}
		else if(input[i] >= 97 && input[i] <= 114){														//소문자인 경우
			input[i] = input[i] + 13;
			if (input[i] > 122) {
				output = input[i] - 26;
				cout << output;
			}
			else {
				output = input[i];
				cout << output;
			}
		}
		else {
			input[i] = input[i] - 13;
			output = input[i];
			cout << output;
		}
	}
	return 0;
}