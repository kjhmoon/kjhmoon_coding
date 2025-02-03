#include <iostream>
using namespace std;

int main() {
	int N = 0;
	char ary[101];
	cin >> N;
	int result = 0;
	for (int i = 0; i < N; i++) {
		cin >> ary[i];
		result += ary[i] - '0';
	}
	cout << result;
	return 0;
}