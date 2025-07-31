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
	int temp;
	cin >> N;
	queue<int>Q;
	for (int i = 1; i <= N; i++) {	//큐 삽입
		Q.push(i);
	}
	while (1) {
		cout << Q.front() << ' ';
		Q.pop();
		if (Q.empty() == 1) {
			exit(0);
		}
		temp = Q.front();
		Q.pop();
		Q.push(temp);
	}
	return 0;
}