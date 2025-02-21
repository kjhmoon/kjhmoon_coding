#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string input_word; //문자열 입력 
	string save_word; //축약된 문자열 
	int english[26] = { 0 }; //영어 문자 count 0 초기화
	int count1 = 0; //조건이 부합하지 않는 문자열 count
	int count2 = 0;
	int n; //n개의 문자열을 받음
	int l;
	cin >> n;
	for (int w = 0; w < n; w++) {		//단어 n개 입력 받기
		cin >> input_word;
		for (int i = 0; i < input_word.length();){	//첫번째 단어 기준점 잡기
			int j = i + 1;
			save_word += input_word[i];
			for (j; j < input_word.length();) { //2번째 이상 단어 글자 같은지 다른지 확인	
				if (input_word[i] == input_word[j]) {	//만약 1번째 글자 == 2번째 글자가 같을경우
					j++;
				}
				else if(input_word[i] != input_word[j]){
 					i = j;
					break;
				}
			}
			if (j >= input_word.length()) {
				i = j;
			}
		}
		for (int k = 0; k < save_word.length(); k++) {
			l = save_word[k] - 97;
			english[l]++;
		}
		for (int c = 0; c < 26; c++) {
			if (english[c] >= 2) {
				count1++;
			}
		}
		if (count1++ == 0) {
			count2++;
		}
		save_word = { };
		for (int q = 0; q < 26; q++) {
			english[q] = 0;
		}
		count1 = 0;
	}
	cout << count2;
	return 0;
}
