#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int N, M;
	int basket[101] = { 0 };
	int a, b, c;							// a부터 b번 바구니까지 c번공 삽입
	cin >> N >> M;
	for (int j = 0; j < M; j++) {
		cin >> a >> b >> c;
		for (int n = a; n <= b; n++) {
			basket[n] = c;
		}
	}
	for (int i = 1; i <= N; i++) { //바구니 출력
		cout << basket[i] << ' ';
	}

	return 0;
}
