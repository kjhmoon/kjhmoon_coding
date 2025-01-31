#include <iostream>
using namespace std;

int main() {
	int a, b=0;
	int t;
	int ary[10000];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		cin >> b;
		ary[i] = a + b;
	}
	for (int i = 0; i < t; i++) {
		cout << ary[i]<<"\n";
	}
	return 0;
}