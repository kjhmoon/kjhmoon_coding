#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	int number[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) { //5개 숫자 입력 받기
		cin >> number[i];
		sum += number[i];
	}
	sum = sum / 5; //평균
	sort(number, number + 5);	//정렬
	cout << sum << '\n';
	cout << number[2];
	
	return 0;
}