#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int arr[100][100] = { };
	int n; //색종이 개수
	int left; //색종이 좌변과 도화지 사이의 거리
	int down; //색종이 아래변과 도화지 사이의 거리
	int extent = 0; // 넓이
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> left >> down; //left가 3 down이 7
		for (int m = down; m < down + 10; m++) {
			for (int j = left; j < left + 10; j++) {
			 arr[m][j] = 1;
			}
		}
	}
	for (int k = 0; k < 100; k++) {
		for (int q = 0; q < 100; q++) {
			if (arr[k][q] == 1) {
				extent++;
			}
		}
	}
	cout << extent;
	return 0;
}