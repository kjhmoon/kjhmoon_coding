#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	int q, w, e, r;
	string Q, W, E, R;
	cin >> a >> b;
	q = a * (b % 10);
	w = a * (b % 100 - b % 10);
	e = a * (b%1000 - b % 100);
	r = q + w + e;
	W = to_string(w);
	W.pop_back();
	E = to_string(e);
	E.pop_back();
	E.pop_back();
	cout << q << '\n' << W << '\n' << E << '\n' << r;

}
