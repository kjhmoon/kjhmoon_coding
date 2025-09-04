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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int A, B;
		int sum = 1;
		int count = 2;
		cin >> A >> B;
		while (1) {
			if (A == 1 || B == 1 || count > A || count > B) {
				sum *= A;
				sum *= B;
				cout << sum << '\n';
				break;
			}
			if (A % count == 0 && B % count == 0) {
				A = A / count;
				B = B / count;
				sum *= count;
				count = 2;
			}
			else {
				count++;
			}
		}
	}
	return 0;
}