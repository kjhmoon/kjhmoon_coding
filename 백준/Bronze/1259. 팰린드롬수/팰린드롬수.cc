#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	string A;
	string B;
	while (cin >> A) {
		if (A == "0") {
			exit(0);
		}
		B = A; // string B에 복사
		reverse(A.begin(), A.end()); //string A 문자열 변경
		if (B == A) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
	return 0;
}