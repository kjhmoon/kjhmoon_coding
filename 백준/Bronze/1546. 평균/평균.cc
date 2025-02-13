#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int n = 0;					    // 과목의 수
	int subjects[1001];						 // 과목 점수 저장
	long double avg1;					 	//일반적인 평균
	long double avg2 = 0;			     	//특별한 평균(답)
	long double sum = 0;					//점수 합계
	long double M = 0;						// 최고점수
	cin >> n;
	for (int i = 0; i < n; i++) {				//점수저장
		cin >> subjects[i];
		sum += subjects[i];
	}
	M = subjects[0];				
	for (int i = 0; i < n; i++) {	//최고점수 M 구하기
		if (M < subjects[i]) {
			M = subjects[i];
		}
	}
	avg1 = sum / n;				//일반적인 평균 구하기
	avg2 = avg1 / M * 100;
	cout << avg2 << '\n';

	return 0;
}
