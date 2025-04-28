#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
using namespace std;

int main() {	
	string x, y; //뒤집히기전 정수
	string X = "";
	string Y = ""; //뒤집힌 정수
	string sum; // X+Y한 정수
	int SUM; // X+Y 뒤집은 정수
	string answer;
	int count = 0;
	cin >> x >> y;
	reverse(x.begin(),x.end());
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != '0') {
				X += x[i];
				count = 1;	
		}
		if (count = 1 && x[i] == '0') {
			X += x[i];
		}
	}
	count = 0;
	reverse(y.begin(),y.end());
	for (int i = 0; i < y.length(); i++) {
		if (y[i] != '0') {
			Y += y[i];
			count = 1;
		}
		if (count = 1 && y[i] == '0') {
			Y += y[i];
		}
	}
	SUM = stoi(X) + stoi(Y);
	sum = to_string(SUM);
	reverse(sum.begin(), sum.end());
	for (int i = 0; i < sum.length(); i++) {

		if (sum[i] != '0') {
			answer += sum[i];
			count = 1;
		}
		if (count = 1 && sum[i] == '0') {
			answer += sum[i];
		}
	}
	SUM = stoi(answer);
	cout << SUM;
	return 0;
}