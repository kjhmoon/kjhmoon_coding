#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string a, b;								//기본 입력 숫자
	int A, B;									// 상근이가 읽는 숫자
	cin >> a >> b;
	reverse(a.begin(), a.end());		//string 문자열 거꾸로
	reverse(b.begin(), b.end());
	A = stoi(a);								//string 문자열을 int 문자열로 형변환 저장
	B = stoi(b);
	if (A > B) {
		cout << A;
	}
	else {
		cout << B;
	}
	return 0;
}
