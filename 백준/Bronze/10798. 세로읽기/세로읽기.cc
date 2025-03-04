#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	char arr[5][16] = { };
	string input_word = { };
	int count = 0;
	for (int i = 0; i < 5; i++) { 
		cin >> input_word;
		size_t maxSize = 15;
		if (input_word.length() < maxSize) { //배열 사이즈 공란에 채워넣기
			input_word.resize(maxSize, '*');
		}
		for (int j = 0; j < 15; j++) { //값 넣기
			arr[i][j] = input_word[j];
		}
	}
	for (int m = 0; m < 15; m++) { //배열 세로로 출력
		for (int n = 0; n < 5; n++) {
			if (arr[n][m] == '*') {
				continue;
			}
			else{
				cout << arr[n][m];
			}
		}
	}
	return 0;
}