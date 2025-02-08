#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string A;
	int a, b;
	int i = 1;
	while (1) {
		cin >> a >> A >> b;
		if (A == ">") {
			if (a > b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == ">=") {
			if (a >= b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == "<") {
			if (a < b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == "<=") {
			if (a <= b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == "==") {
			if (a == b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == "!=") {
			if (a != b) {
				cout << "Case " << i << ':' << " true" << '\n';
				i++;
			}
			else {
				cout << "Case " << i << ':' << " false" << '\n';
				i++;
			}
		}
		else if (A == "E") {
			break;
		}
	}
	return 0;
}
