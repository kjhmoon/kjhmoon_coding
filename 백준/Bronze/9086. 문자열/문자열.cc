#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		getline(cin, A);
		cout << A.front() << A.back() << "\n";
	}
	return 0;
}