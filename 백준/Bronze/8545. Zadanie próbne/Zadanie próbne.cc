#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string A;
	cin >> A;
	reverse(A.begin(), A.end());
	cout << A;
	return 0;
}
