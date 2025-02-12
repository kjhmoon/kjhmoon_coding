#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int n;
	int a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ':' << ' ' << a + b << '\n';
	}
	return 0;
}
