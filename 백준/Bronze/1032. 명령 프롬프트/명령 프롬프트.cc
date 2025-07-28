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
	int i; 
	string input;	//계속 받을 input
	string output;	//최종 string
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> input;
		if (j == 0) {	//초기 글자 복사
			for (int m = 0; m < input.length(); m++) {
				output += input[m];
			}
		}
		for (int l = 0; l < input.length(); l++) {
			if (input[l] != output[l]) {
				output[l] = '?';
			}
		}
	}
	for (int k = 0; k < output.length(); k++) {
		cout << output[k];
	}
	return 0;
}