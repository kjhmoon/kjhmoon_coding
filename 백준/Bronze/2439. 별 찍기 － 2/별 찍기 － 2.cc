#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N;) {
		for (int j = 0; j <N-i-1; j++) {
			cout << " ";
		}
		for (int f = 0; f < i+1; f++) {
			cout << "*";
		}
		cout << "\n";
		i++;
	}
	return 0;
}