#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int a;
	int sum = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	cout << sum;
}
