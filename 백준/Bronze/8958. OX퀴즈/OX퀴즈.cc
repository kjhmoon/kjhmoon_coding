#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int n;
	string A;
	int grade = 0;
	int count = 1;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		grade = 0;
		count = 1;
		getline(cin, A);
		if (A.length() > 80) {
			A = A.substr(0, 80);
		}
		for (size_t j = 0; j < A.length(); j++) {
			if (A[j] == 'O') {
				grade = grade + count;
				count++;
			}
			else {
				count = 1;
			}
		}
		cout << grade << '\n';
	}
	return 0;
}
