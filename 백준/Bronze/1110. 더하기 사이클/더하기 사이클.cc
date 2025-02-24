#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string N; //입력받은 정수
	string correct; //기준점(26)
	string word; // 비교할 문자
	int a, b;
	int i = 0;
	int c;
	cin >> N; 
	if (N.length() == 1) {	//한자리수인 수를 0채워서 넣기
		N = N + '0';
	}
	correct = N;				//비교할 기준점 세우기
	word = correct;
	while (1) {
		a = word[i]-'0';
		b = word[i + 1]-'0';
		if (a+b >= 10) {
			c = ((a+b) % 10);
			word += to_string(b) + to_string(c);
		}
		else {
			word += to_string(b) + to_string(a + b);
		}
		if (word.substr(i+2,i+3) == correct) {
			cout << (i/2)+1;
			exit(0);
		}
		i = i + 2;
	}
	return 0;
}
