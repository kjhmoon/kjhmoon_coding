#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int H, I, A, R, C;
	int output;
	int sum1, sum2;
	cin >> H >> I >> A >> R >> C;
	sum1 = H * I;
	sum2 = A * R * C;
	output = sum1 - sum2;
	cout << output;
	return 0;
}