#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {				
	int N;
	int a;				//삽입 자연수
	string a_string;	//삽입 자연수 문자열
	string aa;			//제곱한 자연수 문자열
	string aaa;			//제곱수 비교할 문자열
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;				//자연수 입력
		a_string = to_string(a);	//a_string 비교 문자열
		aa = to_string(a * a);		//제곱한 비교 문자열
		if (aa.length() >= 4) {
			for (int j = aa.length(); j > aa.length() - 4; j--) {
				for (int k = j; k <= aa.length(); k++) {
					aaa += aa[k - 1];
				}
				if (aaa == a_string) {
					cout << "YES" << '\n';
					break;
				}
				else {
					aaa = "";
				}
			}
			if (aaa == a_string) {
				continue;
			}
			cout << "NO" << '\n';
		}
		else {
			if (a == 1) {
				cout << "YES" << '\n';
				continue;
			}
			for (int j = aa.length(); j > 0; j--) {
				for (int k = j; k <= aa.length(); k++) {
					aaa += aa[k - 1];
				}
				if (aaa == a_string) {
					cout << "YES" << '\n';
					break;
				}
				else {
					aaa = "";
				}
			}
			if (aaa == a_string) {
				continue;
			}
			cout << "NO" << '\n';
		}
	}
	return 0;
}