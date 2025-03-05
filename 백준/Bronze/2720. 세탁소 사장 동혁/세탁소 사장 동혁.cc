#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int quarter; //25센트
	int dime; //10센트
	int nickel; //5센트
	int penny; //1센트
	int T; //테스트 개수
	int C; //거스름돈(input)
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> C;
		quarter = C / 25;		//쿼터 계산
		C = C - 25 * quarter;
		dime = C / 10;			//다임 계산
		C = C - 10 * dime;
		nickel = C / 5;
		C = C - 5 * nickel;		//니켈 계산
		penny = C;				//나머지 페니
		cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
	}
	return 0;
}