#include <iostream>
using namespace std;

int main() {
	int f, d,answer = 0;				
	for (int i = 0; i < 5; i++) {
		cin >> f;
		answer += f * f;
		d = answer % 10;
	}
	cout << d;
	return 0;
}