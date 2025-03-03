#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int i;
	int m;
	cin >> i;
	for (int j = 0; j < i; j++) {
		cin >> m;
		for (int l = 0; l < m; l++) {
			cout << '=';
		}
		cout << '\n';
	}
	return 0;
}