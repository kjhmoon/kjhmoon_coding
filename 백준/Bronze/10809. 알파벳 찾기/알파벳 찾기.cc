#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	string A;
	int B = 0;
	int english[26] = {-1 ,-1 ,-1 ,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	
	getline(cin, A);					//문자길이 조절
	if (A.length() > 100) {
		A = A.substr(0, 100);
	}
	
	for (int i = 0; i < A.length(); i++) {
		B = (int)A[i] - 97;
		if(english[B] == -1){
			english[B] = i;
			B = 0;
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << english[j] << ' ';
	}
	return 0;
}
