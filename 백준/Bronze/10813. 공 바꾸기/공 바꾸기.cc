#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int N, M;
	int basket[101] = { 0 };
	int a, b, c;						//a번, b번 바구니 교환
	cin >> N >> M;

	for (int i = 1; i <= N; i++) { //바구니 개수 설정
		basket[i] = i;
	}
	for (int j = 0; j < M; j++) {	 //바구니 교환 
		cin >> a >> b;
		c = basket[a];
		basket[a] = basket[b];
		basket[b] = c;
	}
	for (int i = 1; i <= N; i++) { //바구니 출력
		cout << basket[i] << ' ';
	}

	return 0;
}
