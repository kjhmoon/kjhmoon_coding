#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int N;
	int K;
	int temp;
	int output[1000];
	int count = 0;
	cin >> N >> K;
	queue<int>Q;
	for (int i = 1; i <= N; i++) {	//큐 삽입
		Q.push(i);
	}
	while (1) {	
		for (int j = 0; j < K-1; j++) {
			temp = Q.front();
			Q.pop();
			Q.push(temp);
		}
		output[count] = Q.front();
		count++;
		Q.pop();
		if (Q.empty() == 1) {
			break;
		}
	}
	for (int l = 0; l < N; l++) {
		if (l == 0 && N == 1) {
			cout << '<' << output[l] << '>';
			exit(0);
		}
		if (l == 0) {
			cout << '<' << output[l] << ", ";
			continue;
		}
		if (l == N - 1) {
			cout << output[l] << '>';
			exit(0);
		}
		else {
			cout << output[l] << ", ";
			continue;
		}
}
	return 0;
}