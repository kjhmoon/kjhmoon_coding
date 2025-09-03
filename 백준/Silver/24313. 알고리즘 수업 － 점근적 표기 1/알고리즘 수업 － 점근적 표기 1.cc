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
	int a_1, a_0;
	int c;
	int n_0;
	cin >> a_1 >> a_0;
	cin >> c;
	cin >> n_0;
	if ((a_1 * n_0 + a_0 <= c * n_0) && (a_1 <= c)) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}