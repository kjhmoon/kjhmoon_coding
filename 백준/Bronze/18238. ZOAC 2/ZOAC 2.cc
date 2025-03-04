#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string input_word;
	int A, B, C;
	int sum = 0;
	int sum1 = 0;
	A = 65;					//현재 위치 아스키 코드
	cin >> input_word;
	for (int i = 0; i < input_word.length(); i++) {
		B = A + 13;		   //중간다리 위치 아스키 코드
		if (B > 90) {
			B = B - 26;
		}
		C = input_word[i]; //목표 위치 아스키 코드
		sum1 = B - C;
		if (sum1 > 0) { 
			if (sum1 > 13) {
				sum += sum1 - 13;
			}
			else {
				sum += 13 - sum1;
			}
		}
		else if (sum1 < 0){
			if (sum1 < -13) {
				sum1 = -sum1;
				sum += sum1 - 13;
			}
			else {
				sum += 13 + sum1;
			}
		}
		else {
			sum += 13;
		}
		A = input_word[i];
		B = 0;
		C = 0;
	}
	cout << sum << '\n';
	return 0;
}