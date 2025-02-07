#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int A, B, C;
	int mul; 
	string act;
	int correct[10] = { };
	stringstream ss;
	cin >> A >> B >> C;
	mul = A * B * C;
	ss << mul;
	ss >> act;
	for (int i = 0; i < act.length(); i++) {
		if (act[i] == '0') {
			correct[0]++;
		}
		if (act[i] == '1') {
			correct[1]++;
		}
		if (act[i] == '2') {
			correct[2]++;
		}
		if (act[i] == '3') {
			correct[3]++;
		}
		if (act[i] == '4') {
			correct[4]++;
		}
		if (act[i] == '5') {
			correct[5]++;
		}
		if (act[i] == '6') {
			correct[6]++;
		}
		if (act[i] == '7') {
			correct[7]++;
		}
		if (act[i] == '8') {
			correct[8]++;
		}
		if (act[i] == '9') {
			correct[9]++;
		}
	}
	for (int j = 0; j < 10; j++) {
		cout << correct[j] << "\n";
	}
	return 0;
}