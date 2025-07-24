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
	int M; //세로 
	int N;	 //가로
	int count = 0;
	cin >> M >> N;
	if (M == N && M == 2) {
		count = 2;
		cout << count;
		exit(0);
	}
	if (M == 2 || N == 2) {
		count = 3;
		if (M < N) {
			count--;
			cout << count;
			exit(0);
		}
		cout << count;
		exit(0);
	}
	while (1) {
		M = M - 2;
		N = N - 2;
		count += 4;
		if (M == N && M == 2) {
			count += 2;
			cout << count;
			exit(0);
		}
		if (M <= 1 || N <= 1) {
			if (M > N) {
				count += 1;
			}
			cout << count;
			exit(0);
		}
		if (M == 2 || N == 2) {
			count += 3;
			if (M < N) {
				count--;
			}
			cout << count;
			exit(0);
		}
	}
	return 0;
}