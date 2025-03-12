#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int n;
	int a, b;
	int xx = 0;
	int yy = 0;
	long long int sum;
	int min_x, max_x;
	int min_y, max_y;
	cin >> n;
	vector<int> x(n); //동적배열 생성
	vector<int> y(n); //동적배열 생성
	for (int i = 0; i < n; i++) { //x,y좌표 모두 배열에 저장
		cin >> a >> b;
		x[i] = a;
		y[i] = b;
	}
	min_x = x[0];
	max_x = x[0];
	min_y = y[0];
	max_y = y[0];
	for (int i = 1; i < n; i++) { //x,y좌표 모두 배열에 저장
		if (min_x > x[i]) {
			min_x = x[i];
		}
		if (max_x < x[i]) {
			max_x = x[i];
		}
		if (min_y > y[i]) {
			min_y = y[i];
		}
		if (max_y < y[i]) {
			max_y = y[i];
		}
	}
	if (min_x > 0 && max_x > 0) {
		xx = max_x - min_x;
	}
	if (min_x < 0 && max_x > 0) {
		xx = max_x + abs(min_x);
	}
	if (min_x < 0 && max_x < 0) {
		xx = abs(min_x) - abs(max_x);
	}

	if (min_y > 0 && max_y > 0) {
		yy = max_y - min_y;
	}
	if (min_y < 0 && max_y > 0) {
		yy = max_y + abs(min_y);
	}
	if (min_y < 0 && max_y < 0) {
		yy = abs(min_y) - abs(max_y);
	}
	

	if (min_x == max_x || min_y == max_y) {
		cout << 0;
		exit(0);
	}
	sum = xx * yy;
	cout << sum << '\n';
	return 0;
}