#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int count = 1; //계층
	int sum = 0; //몇번째인지 가늠하기 위한 변수
	int X; //x번째
	int A = 1;
	cin >> X;
	for (int i = 1; i < 4473; i++) { //계층 확인
		sum += i;
		if (sum >= X) {
			break;
		}
		else {
			count++;
		}
	}
	if (count % 2 == 0) {
		while (sum != X) {
			A++;
			count--;
			sum--;
		}
		cout << count << '/' << A << '\n';
	}
	else {
		while (sum != X) {
			A++;
			count--;
			sum--;
		}
		cout << A << '/' << count << '\n';
	}
	return 0;
}