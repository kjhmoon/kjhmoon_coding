#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int a, b, c, d; // 각 분야 점수
	int sum1 = 0; //분야 점수의 합
	int max = -1; //최대 점수
	int count = 0; //우승자 번호
	for (int i = 1; i <=5;i++) {
		cin >> a >> b >> c >> d;
		sum1 = a + b + c + d;
		if (sum1 > max) {
			max = sum1;
			count = i;
		}
		else {
			a = 0;
			b = 0;
			c = 0;
			d = 0;
		}
	}
	cout << count << ' ' << max;
	return 0;
}
