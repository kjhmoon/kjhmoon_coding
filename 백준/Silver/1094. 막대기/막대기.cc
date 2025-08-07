#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {
	int divisor = 64; //초기값, 나누어지는수 
	int x; //목표길이
	int count = 0; // 현재 남아있는 막대기 개수 
	int sum = 0; //막대기의 합
	cin >> x;
	while (sum != x) {
		if (x == divisor) {
			cout << 1;
			exit(0);
		}
		divisor = divisor / 2;	//막대기를 절반으로 나눈다
		count++;				//나눈만큼 막대기 1개 증가
		sum += divisor;			//절반으로 나눈 막대기의 반쪽을 더한다.
		if (sum > x) {			//모든 막대기를 더한 값이 목표 길이보다 큰지 확인
			sum = sum - divisor; //저장한 막대기값을 빼준다(버려야하기 때문에)
			count--;			//막대기 감소
		}
		else {
			continue;
		}
	}
	cout << count;
	return 0;
}