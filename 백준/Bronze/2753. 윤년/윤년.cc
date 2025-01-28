#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (0 == n % 4 && 0 != n % 100 || 0 == n % 400) {
			cout << 1;
	}
	else
			cout << 0;
	return 0;
}