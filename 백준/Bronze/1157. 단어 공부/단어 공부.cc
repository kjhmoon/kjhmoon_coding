#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int english[26] = { 0 };			//개수 카운트용 배열
	int a;
	int max = -1;
	int max_word;
	int count = 0;
	string input_word;
	cin >> input_word;
	for (int i = 0; i < input_word.length(); i++) {		//대문자 -> 소문자 모두 변환
		if (int(input_word[i]) >= 'A' && int(input_word[i]) <= 'Z') {
			input_word[i] = int(input_word[i]) + 32;
			}
	}
	for (int j = 0; j < input_word.length(); j++) {	//english에 count 시키기
		int a = int(input_word[j]) - 97;
		english[a]++;
	}

	for (int m = 0; m < 26; m++) {		//english count출력 전용
		if (max < english[m]) {
			max = english[m];
			max_word = m;
		}
	}
	for (int n = 0; n < 26; n++) {
		if (max == english[n]) {
			count++;
		}
	}
	if (count >= 2)
		cout << '?';
	else {
		max_word = max_word + 65;
		cout << char(max_word);
	}
}
