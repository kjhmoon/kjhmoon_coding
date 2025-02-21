#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int A; //고정비용
	int B; //가변비용
	int C; // 노트북 가격
	cin >> A >> B >> C;
	int i = 0; //노트북 개수
	if (B > C || B - C == 0) {
		cout << -1;
		exit(0);
	}
	i = (-A) / (B - C);
	cout << i+1;
	return 0;
}
