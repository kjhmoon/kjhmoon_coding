#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int sum = 0; //점수의 합 100초과수
	int number;
	int sum2 = 0; //100초과 아닌 수
	for (int i = 0; i < 10; i++) {
		cin >> number;
		sum += number;
		sum2 = sum - number;
		if (number > 100) {
			if (sum2 == 0) {
				cout << sum;
				exit(0);
			}
			if (number - 100 < 100 - sum2) {
				cout << sum2;
				exit(0);
			}
			else {
				cout << number;
				exit(0);
			}
		}
		if (sum > 100) {	
			if (100 - sum2 > sum - 100) {
				cout << sum;
				exit(0);
			}
			else if (100 - sum2 == sum - 100) {
				cout << sum;
				exit(0);
			}
			else{
				cout << sum2;
				exit(0);
			}
		}
		else if (sum == 100) {
			cout << 100;
			exit(0);
		}
		else {
			number = 0;
		}
	}
	cout << sum;
	return 0;
}
