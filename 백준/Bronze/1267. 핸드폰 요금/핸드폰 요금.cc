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
	int Y = 0; //영식 요금제
	int M = 0; // 민식 요금제
	int Q_Y = 0;
	int R_Y = 0;
	int Q_M = 0;
	int R_M = 0;
	int i = 0;
	int input = 0;
	cin >> i; 
	for (int j = 0; j < i; j++) {
		cin >> input;
		Q_Y = input / 30;
		R_Y = input % 30;
		Q_M = input / 60;
		R_M = input % 60;
		Y += Q_Y * 10;
		M += Q_M * 15;
			Y += 10;
			M += 15;
		Q_Y = 0;
		R_Y = 0;
		Q_M = 0;
		R_M = 0;
	}
	if (Y < M) {
		cout << 'Y' << ' ' << Y;
		exit(0);
	}
	if (Y == M) {
		cout << 'Y' << ' ' << 'M' << ' ' << M;
	}
	else {
		cout << 'M' << ' ' << M;
		exit(0);
	}

	return 0;
}