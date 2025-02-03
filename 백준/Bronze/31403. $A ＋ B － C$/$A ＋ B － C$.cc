#include <iostream>
#include <string>

using namespace std;

int main() {
	string A, B, C;
	int D = 0;
	int E = 0;
	cin >> A >> B >> C;

	D = (stoi(A) + stoi(B) - stoi(C));
	E = (stoi(A + B) - stoi(C));
	
	cout << D << "\n" << E;
	return 0;
}