#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int k, n; //k층 n호
	int l; //l번 반복해서 받음
	int sum = 0;
	cin >> l;
	for (int e = 0; e < l; e++) {
		cin >> k >> n;
		vector<vector<int>> arr(k + 1, vector<int>(n + 1)); //arr 2차원 동적 배열 생성
		for (int k = 1; k <= n; k++) {	//0층 n호까지 기본 설정
			arr[0][k] = k;
		}
		for (int a = 0; a <= k; a++) {	//0층 n호까지 기본 설정
			arr[a][0] = 0;
		}
		for (int b = 1; b <= k; b++) { //1층부터 k층까지 이동
			for (int c = 1; c <= n; c++) { //1호부터 n호까지 이동
				for (int d = 0; d <= c; d++) { //아래층 (b,c) 호까지 sum 구하기
					sum += arr[b - 1][d];
				}
				arr[b][c] = sum;	//sum을 배열에 다시 저장
				sum = 0;
			}
		}
		cout << arr[k][n] << '\n';
		k = 0;
		n = 0;
	}
	return 0;
}
