#include <iostream>
using namespace std;

int main() {
	int ary[101];
	int N;
	int v;
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ary[i];
	}
	cin >> v;
	for (int i = 0; i < N; i++) {
		if (ary[i] == v) {
		count++;
		}
	}
	cout << count;
	return 0;
}