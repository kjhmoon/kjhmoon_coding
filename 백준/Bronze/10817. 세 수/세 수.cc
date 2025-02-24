#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A == B) {
			cout << A;
			exit(0);
	}
	if (B == C) {
			cout << B;
			exit(0);
	}
	if (C == A) {
			cout << C;
			exit(0);
	}
	if (A > B && C > A || A < B && C < A) {
		cout << A;
		exit(0);
	}
	if (A > B && B > C || B < C && A < B) {
		cout << B;
		exit(0);
	}
	if (A > C && C > B || C < B && A < C) {
		cout << C;
		exit(0);
	}
	return 0;
}
