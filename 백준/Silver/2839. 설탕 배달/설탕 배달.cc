#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {				
	int N;					// 설탕의 무게
	int five = 0;			// 5kg 봉지의 몫
	int five_remain = 0;    // 5kg 봉지의 나머지
	int three = 0;			// 3kg 봉지의 몫
	int three_remain = 0;	// 3kg 봉지의 나머지
	int count = 0;			// 봉지의 총 개수
	int sum = 0;
	cin >> N;	
	five = N / 5;
	five_remain = N % 5;
	three = five_remain / 3;
	three_remain = five_remain % 3;
	while (1) {
		if (three_remain != 0) {
			five--;
			if (five < 0) {
				cout << -1;
				exit(0);
			}
			five_remain = five_remain + 5;
			three = five_remain / 3;
			three_remain = five_remain % 3;
		}
		else if (three_remain == 0) {
			sum = five + three;
			cout << sum;
			exit(0);
		}
	}
	return 0;
}