#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i; 
	}
	cout << sum << '\n';
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum*sum << '\n';
	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i*i*i;
	}
	cout << sum << '\n';
	return 0;
}