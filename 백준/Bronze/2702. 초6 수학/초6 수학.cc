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
	int a, b;
	int count = 1;
	int a_1, b_1;
	int a_2, b_2;
	cin >> n;
	for (int l = 0; l < n; l++) {
		cin >> a >> b;
		a_1 = a;
		b_1 = b;
		a_2 = a;
		b_2 = b;
		if (a_1 < b_1) {
			for (int j = 0; j < 100; j++) {
				for (int i = 2; i <= a_1; i++) {
					if (a_1 % i == 0 && b_1 % i == 0) {
						count = count * i;
						a_1 = a_1 / i;
						b_1 = b_1 / i;
						break;
					}
				}
			}
			count = count * a_1 * b_1;
			cout << count << ' ';
			count = 1;
		}
		else {
			for (int j = 0; j < 100; j++) {
				for (int i = 2; i <= b_1; i++) {
					if (a_1 % i == 0 && b_1 % i == 0) {
						count = count * i;
						a_1 = a_1 / i;
						b_1 = b_1 / i;
						break;
					}
				}
			}
			count = count * a_1 * b_1;
			cout << count << ' ';
			count = 1;
		}
		if (a_2 < b_2) {
			for (int k = a_2; k >= 1; k--) {
				if (a_2 % k == 0 && b_2 % k == 0) {
					if (l == n - 1) {
						cout << k;
						exit(0);
					}
					else {
						cout << k << '\n';
					}
					break;
				}
			}
		}
		else {
			for (int k = b_2; k >= 1; k--) {
				if (a_2 % k == 0 && b_2 % k == 0) {
					if (l == n - 1) {
						cout << k;
						exit(0);
					}
					else {
						cout << k << '\n';
					}
					break;
				}
			}
		}
	}
	
}