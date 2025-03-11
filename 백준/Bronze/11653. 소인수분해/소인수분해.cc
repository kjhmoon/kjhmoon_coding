#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n; //초기 입력 수
	cin >> n;
	while (n != 1) {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				cout << i << '\n';
				n = n / i;
				break;
			}
		}
	}
	return 0;
}