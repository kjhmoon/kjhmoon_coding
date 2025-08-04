#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <utility>
using namespace std;

int main() {
	int T;
	int N;
	int M;
	cin >> T;
	for (int k = 0; k < T; k++) {
		int N_arr[30];
		fill(N_arr, N_arr + 30, 1);
		int M_arr[30];
		fill(M_arr, M_arr + 30, 1);
		int temp;
		int temp_arr[30];
		fill(temp_arr, temp_arr + 30, 1);
		unsigned long long int a = 1;
		unsigned long long int b = 1;
		unsigned long long int c = 1;
		cin >> N >> M;
		temp = M - N;
		for (int i = 1; i <= M; i++) {	//M! 저장
			M_arr[i] = i;
		}
		for (int i = 1; i <= N; i++) {	//N! 저장
			N_arr[i] = i;
		}
		for (int i = 1; i <= temp; i++) { //(M-N)! 저장
			temp_arr[i] = i;
		}
		for (int j = 1; j <= M; j++) {	//M!, N! 약분 M! , (M-N)! 약분
			if (M_arr[j] == N_arr[j]) {
				M_arr[j] = 1;
				N_arr[j] = 1;
			}
			if (M_arr[j] == temp_arr[j]) {
				M_arr[j] = 1;
				temp_arr[j] = 1;
			}
		}
		for (int j = 1; j <= M; j++) {	//M! 계산
			a *= M_arr[j];
		}
		for (int j = 1; j <= N; j++) {	//N! 계산
			b *= N_arr[j];
		}
		for (int j = 1; j <= temp; j++) {	//temp! 계산
			c *= temp_arr[j];
		}
		cout << a / (b * c) << '\n';
	}
	return 0;
}