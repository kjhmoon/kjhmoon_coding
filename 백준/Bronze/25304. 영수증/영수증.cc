#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int X;
	int N;
	int a, b;
	int sum = 0;
	cin >> X >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (sum == X) {
		cout << "Yes";
	}
	else
		cout << "No";
	return 0;
}