#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int c; //c회 반복
	double n; //n명 대입
	double sum = 0;// 평균
	int student[1000]; //학생 점수 배열
	double count = 0; //평균보다 높은 학생수
	double percent; //퍼센트
	cin >> c;
	for (int k = 0; k < c; k++) {
		cin >> n;
		for (int m = 0; m < n; m++) {
			cin >> student[m]; 
			sum += student[m];
		}
		sum = sum / n;
		for (int m = 0; m < n; m++) {
			if (student[m] > sum) {
				count++;
			}
		}
		percent = (count / n)*100;
		cout << fixed << setprecision(3) << percent << '%' << '\n';
		percent = 0;
		sum = 0;
		count = 0;
	}
	return 0;
}
