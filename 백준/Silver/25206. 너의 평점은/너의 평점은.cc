#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	string subject = " "; //과목
	double credit = 0.0; //학점
	string grade = " "; //과목 점수 
	double count_credit = 0.0; //학점의 총합(평균 구하기 위해서 필요)
	float grade_number[9] = {4.5,4.0,3.5,3.0,2.5,2.0,1.5,1.0,0.0};
	float num = 0;
	float sum = 0;
	float avg = 0.0; //평균
	for (int i = 0; i < 20; i++) {
		cin >> subject >> credit >> grade;
		if (grade == "P") {
			subject = " ";
			credit = 0.0;
			grade = " ";
			continue;
		}
		else if (grade == "A+") {
				num = grade_number[0]; //해당 평점을 num에
				sum += num * credit; //평점 x 학점
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "A0") {
				num = grade_number[1];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "B+") {
				num = grade_number[2];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "B0") {
				num = grade_number[3];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "C+") {
				num = grade_number[4];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "C0") {
				num = grade_number[5];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "D+") {
				num = grade_number[6];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "D0") {
				num = grade_number[7];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
		else if (grade == "F") {
				num = grade_number[8];
				sum += num * credit;
				count_credit += credit; //총 수강한 학점 만들기
		}
	}
	avg = sum / count_credit;
	cout << fixed << setprecision(6) << avg;
	return 0;
}
