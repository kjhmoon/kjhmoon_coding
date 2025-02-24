#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n; //지불한 금액
	int change;	 //잔돈
	int change_count = 0; //잔돈 개수
	cin >> n;
	change = 1000 - n;
	if (change % 500 != change) {
		change_count += change / 500;
		change = change % 500;
	}
	if (change % 100 != change) {
		change_count += change / 100;
		change = change % 100;
	}
	if (change % 50 != change) {
		change_count += change / 50;
		change = change % 50;
	}
	if (change % 10 != change) {
		change_count += change / 10;
		change = change % 10;
	}
	if (change % 5 != change) {
		change_count += change / 5;
		change = change % 5;
	}
	if (change % 1 != change) {
		change_count += change / 1;
		change = change % 1;
	}
	cout << change_count + change;
	return 0;
}
