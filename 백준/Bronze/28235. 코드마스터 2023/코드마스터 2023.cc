#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	string input_word;
	cin >> input_word;
	if (input_word == "SONGDO") {
		cout << "HIGHSCHOOL";
		exit(0);
	}
	if (input_word == "CODE") {
		cout << "MASTER";
		exit(0);
	}
	if (input_word == "2023") {
		cout << "0611";
		exit(0);
	}
	if (input_word == "ALGORITHM") {
		cout << "CONTEST";
		exit(0);
	}
	return 0;
}