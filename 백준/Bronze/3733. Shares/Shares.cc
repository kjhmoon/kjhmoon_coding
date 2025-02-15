#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int N, S;
	int X;
	while (cin >> N >> S) {
			N = N + 1; //심사위원 포함
			if (N > S) {
				cout << 0 << '\n';
			}
			else {
				X = S / N;
				cout << X << '\n';
			}
	}
	return 0;
}
