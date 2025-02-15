#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int chess[6] = {1,1,2,2,2,8};
	int A[6];
	int B[6];
	for (int i = 0; i < 6; i++) {
		cin >> A[i];
		B[i] = chess[i] - A[i];
		cout << B[i] << ' ';
	}
	return 0;
}
