#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << '\n';
	cout << ((A % C) + (B % C)) % C  << '\n';
	cout << (A*B) % C << '\n';
	cout << ((A % C)*(B % C)) % C;
}
