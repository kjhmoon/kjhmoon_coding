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
	int isvalid = 0; //0이면 가중치 1, 1이면 가중치3
	int temp;
	int sum = 0; // 훼손된 번호를 제외한 나머지 번호의 합
	int sum_cal = 0; 
	string input;
	cin >> input;
	for (int i = 0; i < 13; i++) {	//ISBN 합하는 과정
		if (input[i] == '*') {
			if (i % 2 != 0) {
				isvalid = 1;
				continue;
			}
			else {
				continue;
			}
		}
		else {
			temp = input[i] - '0';
			if (i % 2 == 0) {
				sum += temp;
			}
			else {
				temp = temp * 3;
				sum += temp;
			}
		}
	}
	if (sum % 10 == 0) {
		cout << 0;
		exit(0);
	}
	for (int i = 1; i <= 9; i++) {
		if (isvalid == 1) {
			sum_cal = sum + (i * 3);
			if (sum_cal % 10 == 0) {
				cout << i;
				exit(0);
			}
		}
		else {
			sum_cal = sum + i;
			if (sum_cal % 10 == 0) {
				cout << i;
				exit(0);
			}
		}
	}
	return 0;
}