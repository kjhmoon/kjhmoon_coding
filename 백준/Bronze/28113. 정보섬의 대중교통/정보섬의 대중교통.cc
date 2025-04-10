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
	int N, A, B;		//N: 지하철로 가는시간 A: 버스 기다리는 시간 B: 지하철 기다리는 시간
	int C = 0;
	cin >> N >> A >> B;
	C += N;
	C += B - N;
	if (A == C) {
		cout << "Anything";
		exit(0);
	}
	if (A < C) {
		cout << "Bus";
		exit(0);
	}
	if (A > C) {
		cout << "Subway";
		exit(0);
	}
	return 0;
}