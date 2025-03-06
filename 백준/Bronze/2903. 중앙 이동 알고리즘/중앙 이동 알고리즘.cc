#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int N; // N번 거친 수 
	cin >> N;
	int sum = 0; //초기 점 수
	int A = 2; //추가 되는 꼭짓점 수 
	for (int i = 0; i < N; i++) {
		A = A + (A - 1);
		sum = A * A;		
	}
	cout << sum << '\n';
	return 0;
}