#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int a, b; // a ~ b 사이에 있는 소수 범위 설정
	int count = 0; // 약수 개수  
	int N; //소수 최소값5
	int sum = 0; //소수들의 합
	int flag = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
			if (count > 2) {
				count = 0;
				break;
			}
		}
		if (count == 2 && flag == 0) {
			N = i;
			sum += i;
			count = 0;
			flag = 1;
		}
		if (count == 2 && flag == 1) {
			sum += i;
			count = 0;
		}
		count = 0;
	}
	if (sum == 0) {
		cout << -1;
		exit(0);
	}
	else {
		cout << sum << '\n';
		cout << N;
	}
	return 0;
}