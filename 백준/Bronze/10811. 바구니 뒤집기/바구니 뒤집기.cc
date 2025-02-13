#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int N, M;
	int basket[101] = { 0 };
	int sub_basket[101] = { 0 };
	int a, b, c;					          //a번~b번 바구니 역순
	cin >> N >> M;

	for (int i = 1; i <= N; i++) { //바구니 개수 설정
		basket[i] = i;
	}
	for (int j = 0; j < M; j++) {	 //바구니 교환 
		cin >> a >> b;
		c = b;
		for (int n = a; n <= b; n++) {		//sub_basket에 저장
			sub_basket[n] = basket[n];
		}
		c = b;
		for (int m = a; m <= b; m++) {		//basket에 역순으로 저장
			basket[c] = sub_basket[m];
			c--;
		}
	}
	for (int i = 1; i <= N; i++) { //바구니 출력
		cout << basket[i] << ' ';
	}

	return 0;
}
