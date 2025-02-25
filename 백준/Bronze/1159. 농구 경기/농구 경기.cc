#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n; //단어수
	int english[26] = { 0 };
	int a; //첫번째 글자 위치 저장
	int count = 0;
	string input_word;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input_word;
		a = int(input_word[0]) - 97;
		english[a]++;
	}
	for (int j = 0; j < 26; j++) {
		if (english[j] >= 5) {
			cout << char( j + 97);
		}
		else {
			count++;
		}
		if (count == 26) {
			cout << "PREDAJA";
			exit(0);
		}
	}
	return 0;
}
